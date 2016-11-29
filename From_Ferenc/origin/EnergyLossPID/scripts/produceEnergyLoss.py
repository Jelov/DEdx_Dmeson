import FWCore.ParameterSet.Config as cms

process = cms.Process("produceEnergyLoss")

process.load("Configuration.StandardSequences.Services_cff")
process.load("Configuration.StandardSequences.FrontierConditions_GlobalTag_cff")
process.load("Configuration.Geometry.GeometryIdeal_cff")
process.load("Configuration.StandardSequences.MagneticField_cff")

process.load("UserCode.EnergyLossPID.EnergyLossProducer_cff")

###############################################################################
# Message logger
process.MessageLogger = cms.Service("MessageLogger",
  cerr = cms.untracked.PSet(
    threshold = cms.untracked.string('DEBUG'),
    DEBUG     = cms.untracked.PSet(
    limit     = cms.untracked.int32(1000000)
    )
  ),
  destinations    = cms.untracked.vstring('cerr'),
  suppressWarning = cms.untracked.vstring('refitterForEnergyLoss')
)

# Source
process.source = cms.Source("PoolSource",
  skipEvents = cms.untracked.uint32(0),
  fileNames  = cms.untracked.vstring(
    '/store/express/PARun2016B/ExpressPhysicsPA/FEVT/Express-v1/000/285/244/00000/DC3CC47F-38AA-E611-B39C-02163E0119F6.root',
    '/store/express/PARun2016B/ExpressPhysicsPA/FEVT/Express-v1/000/285/244/00000/DCC7CFAE-31AA-E611-917D-FA163E810893.root',
    '/store/express/PARun2016B/ExpressPhysicsPA/FEVT/Express-v1/000/285/244/00000/E0B0EB79-26AA-E611-A4B2-02163E014360.root',
    '/store/express/PARun2016B/ExpressPhysicsPA/FEVT/Express-v1/000/285/244/00000/E2D7CABD-2AAA-E611-9376-02163E0141BE.root',
    '/store/express/PARun2016B/ExpressPhysicsPA/FEVT/Express-v1/000/285/244/00000/E60AB31C-3EAA-E611-9D85-02163E0119F6.root',
    '/store/express/PARun2016B/ExpressPhysicsPA/FEVT/Express-v1/000/285/244/00000/F21BD638-32AA-E611-BE8B-02163E01448D.root',
    '/store/express/PARun2016B/ExpressPhysicsPA/FEVT/Express-v1/000/285/244/00000/F4B095E0-29AA-E611-A347-FA163E3AEC35.root',
    '/store/express/PARun2016B/ExpressPhysicsPA/FEVT/Express-v1/000/285/244/00000/F6A65EA8-37AA-E611-834E-FA163E63CF69.root',
    '/store/express/PARun2016B/ExpressPhysicsPA/FEVT/Express-v1/000/285/244/00000/FC8DAD26-32AA-E611-B038-02163E0144D3.root'
  )
)

process.maxEvents = cms.untracked.PSet(
  input = cms.untracked.int32(1000)
)

# Global tag
process.GlobalTag.globaltag = '80X_dataRun2_Prompt_v15'

# Tag
process.energyLossProducer.tag = cms.string('pPb2016')

process.reco = cms.Path(process.MeasurementTrackerEvent
                      * process.siPixelClusterShapeCache)

# Schedule
process.schedule = cms.Schedule(process.reco,
                                process.produceEnergyLoss)

