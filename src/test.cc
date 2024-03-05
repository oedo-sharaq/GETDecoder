#include <iostream>
#include "TGetEventStore.h"
#include <TSegmentInfo.h> // use segid
#include <TSegmentedData.h>
#include <TEventHeader.h>
#include <TRunInfo.h>
#include <TRawDataFadc.h>
#include <TTimeStamp.h>
#if defined(__CINT__)
#define _SYS_TYPES_H_
#endif
#include <sys/stat.h>
#include <TFile.h>
#include <TObjString.h>
#include <GETDecoder.hh>

/*#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#ifdef HAVE_MPI_H
#include <mpi.h>
#endif
*/
// using art::TGetEventStore;
// ClassImp(TGetEventStore)

using namespace std;
// GETDecoder fGETDecoder;

// fGETDecoder->GetCoboFrame
//   fGetDecoder = new GETDecoder;

Bool_t SetData(Int_t a)
{
    if (a > 0)
        return kTRUE;
}

int main()
{
    SetData(1);
    // cout << SetData(1) << endl;
    return 0;
}