//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "ALAudioIn.h"
#include "LPComponent.h"
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include "LPControl.h"
#include "LPControlDrawLayers.h"
#include "SLControlCollection.h"
#include "SLScope.h"
#include "ALAudioOut.h"
#include "ALBasicAudioOut.h"
#include "ALCommonGen.h"
#include "ALSignalGen.h"
#include "SLCommonGen.h"
#include "ALAmplifier.h"
#include "ALCommonFilter.h"
#include "SLCommonFilter.h"
#include "ALCommonMeter.h"
#include "ALDynamicRangeCompressor.h"
#include "ALRMSMeter.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TALAudioIn *ALAudioIn1;
        TALAudioOut *ALAudioOut1;
        TTrackBar *TrackBar1;
        TTrackBar *TrackBar2;
        TALDynamicRangeCompressor *ALDynamicRangeCompressor1;
        TLabel *Label1;
        TComboBox *ComboBox1;
        TButton *Button1;
        TLabel *Label2;
        TComboBox *ComboBox2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TTrackBar *TrackBar4;
        TLabel *Label7;
        TALAmplifier *ALAmplifier1;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TProgressBar *ProgressBar1;
        TPanel *Panel1;
        TButton *Button2;
        void __fastcall TrackBar2Change(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall TrackBar1Change(TObject *Sender);
        void __fastcall TrackBar4Change(TObject *Sender);
        void __fastcall ComboBox2Change(TObject *Sender);
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
void __fastcall TForm1::ReadParams();
void __fastcall TForm1::WriteParams();
void __fastcall TForm1::ComboParams();
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
