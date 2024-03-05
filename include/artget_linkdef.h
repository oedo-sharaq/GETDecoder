/**
 * @file   artget_linkdef.h
 * @brief
 *
 * @date   Created       : 2017-12-21 04:52:59 JST
 *         Last Modified : 2017-12-21 04:53:29 JST (ota)
 * @author Shinsuke OTA <ota@cns.s.u-tokyo.ac.jp>
 *
 *    (C) 2017 Shinsuke OTA
 */

#ifndef INCLUDE_GUARD_UUID_342968CD_4E97_46D9_8767_5C0E91A08ED0
#define INCLUDE_GUARD_UUID_342968CD_4E97_46D9_8767_5C0E91A08ED0

#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
// TGetEventStore
#pragma link C++ class art::TGetEventStore + ;
// #pragma link C++ class art::IEventStore + ;
// #pragma link C++ class art::TProcessor + ;
// #pragma link C++ class art::TAttParameter + ;
// #pragma link C++ class art::TLoop + ;
// #pragma link C++ class art::TEventHeader + ;
// #pragma link C++ class art::TRawDataFadc + ;
// #pragma link C++ class art::TRawDataObject + ;

// GETDecoder
#pragma link C++ class GETDecoder + ;
#pragma link C++ class GETFrameInfo + ;
#pragma link C++ class GETHeaderBase + ;
#pragma link C++ class GETBasicFrameHeader + ;
#pragma link C++ class GETLayerHeader + ;

#pragma link C++ class GETTopologyFrame + ;
#pragma link C++ class GETBasicFrame + ;
#pragma link C++ class GETCoboFrame + ;
#pragma link C++ class GETLayeredFrame + ;
#pragma link C++ class GETMutantFrame + ;
#pragma link C++ class GETFileChecker + ;
#pragma link C++ class GETMath + ;
#endif /* __CINT__ */

#endif // INCLUDE_GUARD_UUID_342968CD_4E97_46D9_8767_5C0E91A08ED0
