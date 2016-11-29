#include "../interface/TBunchCrossing.h"
#include "../interface/TVertex.h"
#include "../interface/TTrack.h"
#include "../interface/TPixelHit.h"
#include "../interface/TStripHit.h"

#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class TBunchCrossing+;
#pragma link C++ class TVertex+;
#pragma link C++ class TTrack+;
#pragma link C++ class TPixelHit+;
#pragma link C++ class TStripHit+;

#pragma link C++ class pair<short,short>+;

#endif
// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc530dIsrcdIUserCodedIEnergyLossPIDdIsrcdIUserCodeEnergyLossPIDdIbdIUserCodeEnergyLossPID_yr

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TBunchCrossing(void *p = 0);
   static void *newArray_TBunchCrossing(Long_t size, void *p);
   static void delete_TBunchCrossing(void *p);
   static void deleteArray_TBunchCrossing(void *p);
   static void destruct_TBunchCrossing(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBunchCrossing*)
   {
      ::TBunchCrossing *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBunchCrossing >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TBunchCrossing", ::TBunchCrossing::Class_Version(), "../interface/TBunchCrossing.h", 10,
                  typeid(::TBunchCrossing), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBunchCrossing::Dictionary, isa_proxy, 4,
                  sizeof(::TBunchCrossing) );
      instance.SetNew(&new_TBunchCrossing);
      instance.SetNewArray(&newArray_TBunchCrossing);
      instance.SetDelete(&delete_TBunchCrossing);
      instance.SetDeleteArray(&deleteArray_TBunchCrossing);
      instance.SetDestructor(&destruct_TBunchCrossing);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBunchCrossing*)
   {
      return GenerateInitInstanceLocal((::TBunchCrossing*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TBunchCrossing*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TVertex(void *p = 0);
   static void *newArray_TVertex(Long_t size, void *p);
   static void delete_TVertex(void *p);
   static void deleteArray_TVertex(void *p);
   static void destruct_TVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVertex*)
   {
      ::TVertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVertex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TVertex", ::TVertex::Class_Version(), "../interface/TVertex.h", 9,
                  typeid(::TVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVertex::Dictionary, isa_proxy, 4,
                  sizeof(::TVertex) );
      instance.SetNew(&new_TVertex);
      instance.SetNewArray(&newArray_TVertex);
      instance.SetDelete(&delete_TVertex);
      instance.SetDeleteArray(&deleteArray_TVertex);
      instance.SetDestructor(&destruct_TVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVertex*)
   {
      return GenerateInitInstanceLocal((::TVertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TVertex*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTrack(void *p = 0);
   static void *newArray_TTrack(Long_t size, void *p);
   static void delete_TTrack(void *p);
   static void deleteArray_TTrack(void *p);
   static void destruct_TTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTrack*)
   {
      ::TTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTrack", ::TTrack::Class_Version(), "../interface/TTrack.h", 10,
                  typeid(::TTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TTrack) );
      instance.SetNew(&new_TTrack);
      instance.SetNewArray(&newArray_TTrack);
      instance.SetDelete(&delete_TTrack);
      instance.SetDeleteArray(&deleteArray_TTrack);
      instance.SetDestructor(&destruct_TTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTrack*)
   {
      return GenerateInitInstanceLocal((::TTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TTrack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPixelHit(void *p = 0);
   static void *newArray_TPixelHit(Long_t size, void *p);
   static void delete_TPixelHit(void *p);
   static void deleteArray_TPixelHit(void *p);
   static void destruct_TPixelHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPixelHit*)
   {
      ::TPixelHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPixelHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPixelHit", ::TPixelHit::Class_Version(), "../interface/TPixelHit.h", 8,
                  typeid(::TPixelHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPixelHit::Dictionary, isa_proxy, 4,
                  sizeof(::TPixelHit) );
      instance.SetNew(&new_TPixelHit);
      instance.SetNewArray(&newArray_TPixelHit);
      instance.SetDelete(&delete_TPixelHit);
      instance.SetDeleteArray(&deleteArray_TPixelHit);
      instance.SetDestructor(&destruct_TPixelHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPixelHit*)
   {
      return GenerateInitInstanceLocal((::TPixelHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TPixelHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TStripHit(void *p = 0);
   static void *newArray_TStripHit(Long_t size, void *p);
   static void delete_TStripHit(void *p);
   static void deleteArray_TStripHit(void *p);
   static void destruct_TStripHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStripHit*)
   {
      ::TStripHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStripHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TStripHit", ::TStripHit::Class_Version(), "../interface/TStripHit.h", 8,
                  typeid(::TStripHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStripHit::Dictionary, isa_proxy, 4,
                  sizeof(::TStripHit) );
      instance.SetNew(&new_TStripHit);
      instance.SetNewArray(&newArray_TStripHit);
      instance.SetDelete(&delete_TStripHit);
      instance.SetDeleteArray(&deleteArray_TStripHit);
      instance.SetDestructor(&destruct_TStripHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStripHit*)
   {
      return GenerateInitInstanceLocal((::TStripHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TStripHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEshortcOshortgR_Dictionary();
   static void pairlEshortcOshortgR_TClassManip(TClass*);
   static void *new_pairlEshortcOshortgR(void *p = 0);
   static void *newArray_pairlEshortcOshortgR(Long_t size, void *p);
   static void delete_pairlEshortcOshortgR(void *p);
   static void deleteArray_pairlEshortcOshortgR(void *p);
   static void destruct_pairlEshortcOshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<short,short>*)
   {
      pair<short,short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<short,short>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<short,short>", "string", 96,
                  typeid(pair<short,short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEshortcOshortgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<short,short>) );
      instance.SetNew(&new_pairlEshortcOshortgR);
      instance.SetNewArray(&newArray_pairlEshortcOshortgR);
      instance.SetDelete(&delete_pairlEshortcOshortgR);
      instance.SetDeleteArray(&deleteArray_pairlEshortcOshortgR);
      instance.SetDestructor(&destruct_pairlEshortcOshortgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<short,short>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEshortcOshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<short,short>*)0x0)->GetClass();
      pairlEshortcOshortgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEshortcOshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TBunchCrossing::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBunchCrossing::Class_Name()
{
   return "TBunchCrossing";
}

//______________________________________________________________________________
const char *TBunchCrossing::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBunchCrossing*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBunchCrossing::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBunchCrossing*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBunchCrossing::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBunchCrossing*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBunchCrossing::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBunchCrossing*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVertex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVertex::Class_Name()
{
   return "TVertex";
}

//______________________________________________________________________________
const char *TVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVertex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVertex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVertex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVertex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTrack::Class_Name()
{
   return "TTrack";
}

//______________________________________________________________________________
const char *TTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPixelHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPixelHit::Class_Name()
{
   return "TPixelHit";
}

//______________________________________________________________________________
const char *TPixelHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPixelHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPixelHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPixelHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPixelHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPixelHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPixelHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPixelHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStripHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStripHit::Class_Name()
{
   return "TStripHit";
}

//______________________________________________________________________________
const char *TStripHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStripHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStripHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStripHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStripHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStripHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStripHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStripHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TBunchCrossing::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBunchCrossing.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TBunchCrossing::Class(),this);
   } else {
      R__b.WriteClassBuffer(TBunchCrossing::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBunchCrossing(void *p) {
      return  p ? new(p) ::TBunchCrossing : new ::TBunchCrossing;
   }
   static void *newArray_TBunchCrossing(Long_t nElements, void *p) {
      return p ? new(p) ::TBunchCrossing[nElements] : new ::TBunchCrossing[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBunchCrossing(void *p) {
      delete ((::TBunchCrossing*)p);
   }
   static void deleteArray_TBunchCrossing(void *p) {
      delete [] ((::TBunchCrossing*)p);
   }
   static void destruct_TBunchCrossing(void *p) {
      typedef ::TBunchCrossing current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TBunchCrossing

//______________________________________________________________________________
void TVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TVertex(void *p) {
      return  p ? new(p) ::TVertex : new ::TVertex;
   }
   static void *newArray_TVertex(Long_t nElements, void *p) {
      return p ? new(p) ::TVertex[nElements] : new ::TVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_TVertex(void *p) {
      delete ((::TVertex*)p);
   }
   static void deleteArray_TVertex(void *p) {
      delete [] ((::TVertex*)p);
   }
   static void destruct_TVertex(void *p) {
      typedef ::TVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TVertex

//______________________________________________________________________________
void TTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTrack(void *p) {
      return  p ? new(p) ::TTrack : new ::TTrack;
   }
   static void *newArray_TTrack(Long_t nElements, void *p) {
      return p ? new(p) ::TTrack[nElements] : new ::TTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTrack(void *p) {
      delete ((::TTrack*)p);
   }
   static void deleteArray_TTrack(void *p) {
      delete [] ((::TTrack*)p);
   }
   static void destruct_TTrack(void *p) {
      typedef ::TTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTrack

//______________________________________________________________________________
void TPixelHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPixelHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPixelHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPixelHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPixelHit(void *p) {
      return  p ? new(p) ::TPixelHit : new ::TPixelHit;
   }
   static void *newArray_TPixelHit(Long_t nElements, void *p) {
      return p ? new(p) ::TPixelHit[nElements] : new ::TPixelHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPixelHit(void *p) {
      delete ((::TPixelHit*)p);
   }
   static void deleteArray_TPixelHit(void *p) {
      delete [] ((::TPixelHit*)p);
   }
   static void destruct_TPixelHit(void *p) {
      typedef ::TPixelHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TPixelHit

//______________________________________________________________________________
void TStripHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStripHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TStripHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TStripHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TStripHit(void *p) {
      return  p ? new(p) ::TStripHit : new ::TStripHit;
   }
   static void *newArray_TStripHit(Long_t nElements, void *p) {
      return p ? new(p) ::TStripHit[nElements] : new ::TStripHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TStripHit(void *p) {
      delete ((::TStripHit*)p);
   }
   static void deleteArray_TStripHit(void *p) {
      delete [] ((::TStripHit*)p);
   }
   static void destruct_TStripHit(void *p) {
      typedef ::TStripHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TStripHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEshortcOshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<short,short> : new pair<short,short>;
   }
   static void *newArray_pairlEshortcOshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<short,short>[nElements] : new pair<short,short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEshortcOshortgR(void *p) {
      delete ((pair<short,short>*)p);
   }
   static void deleteArray_pairlEshortcOshortgR(void *p) {
      delete [] ((pair<short,short>*)p);
   }
   static void destruct_pairlEshortcOshortgR(void *p) {
      typedef pair<short,short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<short,short>

namespace ROOT {
   static TClass *vectorlEunsignedsPchargR_Dictionary();
   static void vectorlEunsignedsPchargR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPchargR(void *p = 0);
   static void *newArray_vectorlEunsignedsPchargR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPchargR(void *p);
   static void deleteArray_vectorlEunsignedsPchargR(void *p);
   static void destruct_vectorlEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned char>*)
   {
      vector<unsigned char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned char>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned char>", -2, "vector", 214,
                  typeid(vector<unsigned char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPchargR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned char>) );
      instance.SetNew(&new_vectorlEunsignedsPchargR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPchargR);
      instance.SetDelete(&delete_vectorlEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPchargR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned char> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<unsigned char>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned char>*)0x0)->GetClass();
      vectorlEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned char> : new vector<unsigned char>;
   }
   static void *newArray_vectorlEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned char>[nElements] : new vector<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPchargR(void *p) {
      delete ((vector<unsigned char>*)p);
   }
   static void deleteArray_vectorlEunsignedsPchargR(void *p) {
      delete [] ((vector<unsigned char>*)p);
   }
   static void destruct_vectorlEunsignedsPchargR(void *p) {
      typedef vector<unsigned char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned char>

namespace ROOT {
   static TClass *vectorlETVertexgR_Dictionary();
   static void vectorlETVertexgR_TClassManip(TClass*);
   static void *new_vectorlETVertexgR(void *p = 0);
   static void *newArray_vectorlETVertexgR(Long_t size, void *p);
   static void delete_vectorlETVertexgR(void *p);
   static void deleteArray_vectorlETVertexgR(void *p);
   static void destruct_vectorlETVertexgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TVertex>*)
   {
      vector<TVertex> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TVertex>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TVertex>", -2, "vector", 214,
                  typeid(vector<TVertex>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETVertexgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TVertex>) );
      instance.SetNew(&new_vectorlETVertexgR);
      instance.SetNewArray(&newArray_vectorlETVertexgR);
      instance.SetDelete(&delete_vectorlETVertexgR);
      instance.SetDeleteArray(&deleteArray_vectorlETVertexgR);
      instance.SetDestructor(&destruct_vectorlETVertexgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TVertex> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TVertex>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETVertexgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TVertex>*)0x0)->GetClass();
      vectorlETVertexgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETVertexgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETVertexgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TVertex> : new vector<TVertex>;
   }
   static void *newArray_vectorlETVertexgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TVertex>[nElements] : new vector<TVertex>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETVertexgR(void *p) {
      delete ((vector<TVertex>*)p);
   }
   static void deleteArray_vectorlETVertexgR(void *p) {
      delete [] ((vector<TVertex>*)p);
   }
   static void destruct_vectorlETVertexgR(void *p) {
      typedef vector<TVertex> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TVertex>

namespace ROOT {
   static TClass *vectorlETTrackgR_Dictionary();
   static void vectorlETTrackgR_TClassManip(TClass*);
   static void *new_vectorlETTrackgR(void *p = 0);
   static void *newArray_vectorlETTrackgR(Long_t size, void *p);
   static void delete_vectorlETTrackgR(void *p);
   static void deleteArray_vectorlETTrackgR(void *p);
   static void destruct_vectorlETTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TTrack>*)
   {
      vector<TTrack> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TTrack>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TTrack>", -2, "vector", 214,
                  typeid(vector<TTrack>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETTrackgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TTrack>) );
      instance.SetNew(&new_vectorlETTrackgR);
      instance.SetNewArray(&newArray_vectorlETTrackgR);
      instance.SetDelete(&delete_vectorlETTrackgR);
      instance.SetDeleteArray(&deleteArray_vectorlETTrackgR);
      instance.SetDestructor(&destruct_vectorlETTrackgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TTrack> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TTrack>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TTrack>*)0x0)->GetClass();
      vectorlETTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETTrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TTrack> : new vector<TTrack>;
   }
   static void *newArray_vectorlETTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TTrack>[nElements] : new vector<TTrack>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETTrackgR(void *p) {
      delete ((vector<TTrack>*)p);
   }
   static void deleteArray_vectorlETTrackgR(void *p) {
      delete [] ((vector<TTrack>*)p);
   }
   static void destruct_vectorlETTrackgR(void *p) {
      typedef vector<TTrack> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TTrack>

namespace ROOT {
   static TClass *vectorlETStripHitgR_Dictionary();
   static void vectorlETStripHitgR_TClassManip(TClass*);
   static void *new_vectorlETStripHitgR(void *p = 0);
   static void *newArray_vectorlETStripHitgR(Long_t size, void *p);
   static void delete_vectorlETStripHitgR(void *p);
   static void deleteArray_vectorlETStripHitgR(void *p);
   static void destruct_vectorlETStripHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TStripHit>*)
   {
      vector<TStripHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TStripHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TStripHit>", -2, "vector", 214,
                  typeid(vector<TStripHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStripHitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TStripHit>) );
      instance.SetNew(&new_vectorlETStripHitgR);
      instance.SetNewArray(&newArray_vectorlETStripHitgR);
      instance.SetDelete(&delete_vectorlETStripHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStripHitgR);
      instance.SetDestructor(&destruct_vectorlETStripHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TStripHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TStripHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStripHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TStripHit>*)0x0)->GetClass();
      vectorlETStripHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStripHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStripHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TStripHit> : new vector<TStripHit>;
   }
   static void *newArray_vectorlETStripHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TStripHit>[nElements] : new vector<TStripHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStripHitgR(void *p) {
      delete ((vector<TStripHit>*)p);
   }
   static void deleteArray_vectorlETStripHitgR(void *p) {
      delete [] ((vector<TStripHit>*)p);
   }
   static void destruct_vectorlETStripHitgR(void *p) {
      typedef vector<TStripHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TStripHit>

namespace ROOT {
   static TClass *vectorlETPixelHitgR_Dictionary();
   static void vectorlETPixelHitgR_TClassManip(TClass*);
   static void *new_vectorlETPixelHitgR(void *p = 0);
   static void *newArray_vectorlETPixelHitgR(Long_t size, void *p);
   static void delete_vectorlETPixelHitgR(void *p);
   static void deleteArray_vectorlETPixelHitgR(void *p);
   static void destruct_vectorlETPixelHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TPixelHit>*)
   {
      vector<TPixelHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TPixelHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TPixelHit>", -2, "vector", 214,
                  typeid(vector<TPixelHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETPixelHitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TPixelHit>) );
      instance.SetNew(&new_vectorlETPixelHitgR);
      instance.SetNewArray(&newArray_vectorlETPixelHitgR);
      instance.SetDelete(&delete_vectorlETPixelHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlETPixelHitgR);
      instance.SetDestructor(&destruct_vectorlETPixelHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TPixelHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TPixelHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETPixelHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TPixelHit>*)0x0)->GetClass();
      vectorlETPixelHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETPixelHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETPixelHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TPixelHit> : new vector<TPixelHit>;
   }
   static void *newArray_vectorlETPixelHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TPixelHit>[nElements] : new vector<TPixelHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETPixelHitgR(void *p) {
      delete ((vector<TPixelHit>*)p);
   }
   static void deleteArray_vectorlETPixelHitgR(void *p) {
      delete [] ((vector<TPixelHit>*)p);
   }
   static void destruct_vectorlETPixelHitgR(void *p) {
      typedef vector<TPixelHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TPixelHit>

namespace {
  void TriggerDictionaryInitialization_UserCodeEnergyLossPID_yr_Impl() {
    static const char* headers[] = {
0
    };
    static const char* includePaths[] = {
"/afs/cern.ch/work/c/chengchi/work/2016RunPre/Data_check/Dmeson_dedx/From_Ferenc/CMSSW_8_0_23/src/UserCode/EnergyLossPID/src",
"/afs/cern.ch/work/c/chengchi/work/2016RunPre/Data_check/Dmeson_dedx/From_Ferenc/CMSSW_8_0_23/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/cms/cmssw/CMSSW_8_0_23/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed5/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/boost/1.57.0-giojec2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/pcre/8.37/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/bz2lib/1.0.6/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/clhep/2.2.0.4-ikhhed2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/gsl/1.16/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/libuuid/2.22.2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/python/2.7.11-giojec2/include/python2.7",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/sigcpp/2.6.2/include/sigc++-2.0",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/tbb/44_20151115oss/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/cms/vdt/v0.3.2-giojec2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/xerces-c/2.8.0/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/zlib/1.2.8/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed5/include",
"/afs/cern.ch/work/c/chengchi/work/2016RunPre/Data_check/Dmeson_dedx/From_Ferenc/CMSSW_8_0_23/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "UserCodeEnergyLossPID_yr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$UserCode/EnergyLossPID/src/LinkDef.h")))  TBunchCrossing;
class __attribute__((annotate("$clingAutoload$UserCode/EnergyLossPID/src/LinkDef.h")))  TVertex;
class __attribute__((annotate("$clingAutoload$UserCode/EnergyLossPID/src/LinkDef.h")))  TTrack;
class __attribute__((annotate("$clingAutoload$UserCode/EnergyLossPID/src/LinkDef.h")))  TPixelHit;
class __attribute__((annotate("$clingAutoload$UserCode/EnergyLossPID/src/LinkDef.h")))  TStripHit;
namespace std{template <class _T1, class _T2> struct __attribute__((annotate("$clingAutoload$string")))  pair;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "UserCodeEnergyLossPID_yr dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef GNU_SOURCE
  #define GNU_SOURCE 1
#endif
#ifndef GNU_GCC
  #define GNU_GCC 1
#endif
#ifndef _GNU_SOURCE
  #define _GNU_SOURCE 1
#endif
#ifndef CMSSW_GIT_HASH
  #define CMSSW_GIT_HASH "CMSSW_8_0_23"
#endif
#ifndef PROJECT_NAME
  #define PROJECT_NAME "CMSSW"
#endif
#ifndef PROJECT_VERSION
  #define PROJECT_VERSION "CMSSW_8_0_23"
#endif
#ifndef BOOST_SPIRIT_THREADSAFE
  #define BOOST_SPIRIT_THREADSAFE 1
#endif
#ifndef PHOENIX_THREADSAFE
  #define PHOENIX_THREADSAFE 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TBunchCrossing", payloadCode, "@",
"TPixelHit", payloadCode, "@",
"TStripHit", payloadCode, "@",
"TTrack", payloadCode, "@",
"TVertex", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("UserCodeEnergyLossPID_yr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_UserCodeEnergyLossPID_yr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_UserCodeEnergyLossPID_yr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_UserCodeEnergyLossPID_yr() {
  TriggerDictionaryInitialization_UserCodeEnergyLossPID_yr_Impl();
}
