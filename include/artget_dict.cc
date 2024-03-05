// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME artget_dict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
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

// Header files passed as explicit arguments
#include "TGetEventStore.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_artcLcLTGetEventStore(void *p = nullptr);
   static void *newArray_artcLcLTGetEventStore(Long_t size, void *p);
   static void delete_artcLcLTGetEventStore(void *p);
   static void deleteArray_artcLcLTGetEventStore(void *p);
   static void destruct_artcLcLTGetEventStore(void *p);
   static void streamer_artcLcLTGetEventStore(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::TGetEventStore*)
   {
      ::art::TGetEventStore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::TGetEventStore >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("art::TGetEventStore", ::art::TGetEventStore::Class_Version(), "TGetEventStore.h", 37,
                  typeid(::art::TGetEventStore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::TGetEventStore::Dictionary, isa_proxy, 16,
                  sizeof(::art::TGetEventStore) );
      instance.SetNew(&new_artcLcLTGetEventStore);
      instance.SetNewArray(&newArray_artcLcLTGetEventStore);
      instance.SetDelete(&delete_artcLcLTGetEventStore);
      instance.SetDeleteArray(&deleteArray_artcLcLTGetEventStore);
      instance.SetDestructor(&destruct_artcLcLTGetEventStore);
      instance.SetStreamerFunc(&streamer_artcLcLTGetEventStore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::TGetEventStore*)
   {
      return GenerateInitInstanceLocal((::art::TGetEventStore*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::TGetEventStore*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace art {
//______________________________________________________________________________
atomic_TClass_ptr TGetEventStore::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGetEventStore::Class_Name()
{
   return "art::TGetEventStore";
}

//______________________________________________________________________________
const char *TGetEventStore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TGetEventStore*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGetEventStore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TGetEventStore*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGetEventStore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TGetEventStore*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGetEventStore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TGetEventStore*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
void TGetEventStore::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::TGetEventStore.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::art::TGetEventStore thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef art::TProcessor baseClass0;
      baseClass0::Streamer(R__b);
      //This works around a msvc bug and should be harmless on other platforms
      typedef art::IEventStore baseClass1;
      baseClass1::Streamer(R__b);
      R__b.StreamObject(&(fIsReducedCobo),typeid(fIsReducedCobo));
      {
         art::StringVec_t &R__stl =  fFileName;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TString R__t;
            R__t.Streamer(R__b);
            R__stl.push_back(R__t);
         }
      }
      fNameSegmented.Streamer(R__b);
      fNameRunHeaders.Streamer(R__b);
      fNameEventHeader.Streamer(R__b);
      R__b >> fMaxEventNum;
      R__b >> fRequireHitBit;
      R__b >> fSubtractFPN;
      {
         art::IntVec_t &R__stl =  fValidBucket;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      R__b >> fStartEventNum;
      R__b >> fDataID;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef art::TProcessor baseClass0;
      baseClass0::Streamer(R__b);
      //This works around a msvc bug and should be harmless on other platforms
      typedef art::IEventStore baseClass1;
      baseClass1::Streamer(R__b);
      R__b.StreamObject(&(fIsReducedCobo),typeid(fIsReducedCobo));
      {
         art::StringVec_t &R__stl =  fFileName;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            art::StringVec_t::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            ((TString&)(*R__k)).Streamer(R__b);
            }
         }
      }
      fNameSegmented.Streamer(R__b);
      fNameRunHeaders.Streamer(R__b);
      fNameEventHeader.Streamer(R__b);
      R__b << fMaxEventNum;
      R__b << fRequireHitBit;
      R__b << fSubtractFPN;
      {
         art::IntVec_t &R__stl =  fValidBucket;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            art::IntVec_t::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b << fStartEventNum;
      R__b << fDataID;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace art
namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLTGetEventStore(void *p) {
      return  p ? new(p) ::art::TGetEventStore : new ::art::TGetEventStore;
   }
   static void *newArray_artcLcLTGetEventStore(Long_t nElements, void *p) {
      return p ? new(p) ::art::TGetEventStore[nElements] : new ::art::TGetEventStore[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLTGetEventStore(void *p) {
      delete ((::art::TGetEventStore*)p);
   }
   static void deleteArray_artcLcLTGetEventStore(void *p) {
      delete [] ((::art::TGetEventStore*)p);
   }
   static void destruct_artcLcLTGetEventStore(void *p) {
      typedef ::art::TGetEventStore current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_artcLcLTGetEventStore(TBuffer &buf, void *obj) {
      ((::art::TGetEventStore*)obj)->::art::TGetEventStore::Streamer(buf);
   }
} // end of namespace ROOT for class ::art::TGetEventStore

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 389,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      ::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)nullptr)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = nullptr);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 389,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));

      ::ROOT::AddClassAlternate("vector<TString>","std::vector<TString, std::allocator<TString> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TString>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TString>*)nullptr)->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete ((vector<TString>*)p);
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] ((vector<TString>*)p);
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace {
  void TriggerDictionaryInitialization_artget_dict_Impl() {
    static const char* headers[] = {
"TGetEventStore.h",
nullptr
    };
    static const char* includePaths[] = {
"..",
"../../../include",
"/opt/root6_26_06/include/",
"/root/repos/artemis/sources/loop/get/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "artget_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace art{class __attribute__((annotate(R"ATTRDUMP(get file event store)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TGetEventStore.h")))  TGetEventStore;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "artget_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "TGetEventStore.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"art::TGetEventStore", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("artget_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_artget_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_artget_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_artget_dict() {
  TriggerDictionaryInitialization_artget_dict_Impl();
}
