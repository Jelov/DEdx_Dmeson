#include <iostream>
#include "TH1F.h"
#include "TH2F.h"
#include "TH3F.h"
#include "TFile.h"
#include "TH1D.h"
#include "TCanvas.h"
#include "TF1.h"
#include "TStyle.h"
#include "TRandom.h"
#include "TLatex.h"
#include "TLine.h"
#include "TLegend.h"
#include "TGraph.h"
#include "TFitter.h"
#include "TFitResult.h"
#include "TGraphErrors.h"
#include "TString.h"
#include "TChain.h"

const int nBinP = 600;
const double BinPLow = 0;
const double BinPHigh = 4;
const int nBinde = 600;
const double BindeLow = 0;
const double BindeHigh = 18;

void plot_dEdx(){

	TString infName="/mnt/hadoop/store/user/chengchi/Pythia8_prompt_D0pt0p0_Pthat0_pp502_TuneCUETP8M1/pp_prompt_D0pt0Pthat0_dedx/161127_141748/0000/finder_pp_2015MC_*.root";

//  TString infName="/mnt/hadoop/store/user/chengchi/Pythia8_prompt_D0pt0p0_Pthat0_pp502_TuneCUETP8M1/pp_prompt_D0pt0Pthat0_dedx/161127_141748/0000/finder_pp_2015MC_1.root";

  gStyle->SetOptStat(0);


	TChain *tRoot = new TChain("Dfinder/root");
	tRoot->Add(infName);

	TFile *outf = TFile::Open("dEdx_his.root","recreate");

	TCanvas *c_PdEdx = new TCanvas("c_PdEdx","",800,800);
	c_PdEdx->cd();

	TH2D *h_PdEdx = new TH2D("h_PdEdx","PdEdx;p (GeV/c); dEdx",nBinP,BinPLow,BinPHigh,nBinde,BindeLow,BindeHigh);

	tRoot->Draw("PidInfo.dedx:PidInfo.p>>h_PdEdx","","colz");

  TCanvas *c_PdEdx_wgen = new TCanvas("c_PdEdx_wgen","",800,800);
  c_PdEdx_wgen->cd();

  TH2D *h_PdEdx_wgen = new TH2D("h_PdEdx_wgen","PdEdx_wgen;p (GeV/c); dEdx",nBinP,BinPLow,BinPHigh,nBinde,BindeLow,BindeHigh);

  tRoot->Draw("PidInfo.dedx:PidInfo.p>>h_PdEdx_wgen","TrackInfo.geninfo_index[]>0 && PidInfo.dedx>0.3","colz");

  TCanvas *c_PdEdx_kaon = new TCanvas("c_PdEdx_kaon","",800,800);
  c_PdEdx_kaon->cd();

  TH2D *h_PdEdx_kaon = new TH2D("h_PdEdx_kaon","PdEdx_kaon;p (GeV/c); dEdx",nBinP,BinPLow,BinPHigh,nBinde,BindeLow,BindeHigh);

  tRoot->Draw("PidInfo.dedx:PidInfo.p>>h_PdEdx_kaon","TrackInfo.geninfo_index[]>0 && abs(GenInfo.pdgId[TrackInfo.geninfo_index[]])==321 && PidInfo.dedx>0.3","colz");

  TCanvas *c_PdEdx_pion = new TCanvas("c_PdEdx_pion","",800,800);
  c_PdEdx_pion->cd();

  TH2D *h_PdEdx_pion = new TH2D("h_PdEdx_pion","PdEdx_pion;p (GeV/c); dEdx",nBinP,BinPLow,BinPHigh,nBinde,BindeLow,BindeHigh);

	// h_Pdedx_pion->SetTilte("Gen Pion")

  tRoot->Draw("PidInfo.dedx:PidInfo.p>>h_PdEdx_pion","TrackInfo.geninfo_index[]>0 && abs(GenInfo.pdgId[TrackInfo.geninfo_index[]])==211 && PidInfo.dedx>0.3","colz");


	c_PdEdx->SaveAs("c_PdEdx.C");

	outf->cd();
	h_PdEdx->Write();
	h_PdEdx_wgen->Write();
	h_PdEdx_kaon->Write();
	h_PdEdx_pion->Write();
	outf->cd();
	outf->Close();
	

}
