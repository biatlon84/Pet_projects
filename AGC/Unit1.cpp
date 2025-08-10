//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include "IniFiles.hpp"


#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "ALAudioIn"
#pragma link "LPComponent"
#pragma link "LPControl"
#pragma link "LPControlDrawLayers"
#pragma link "SLControlCollection"
#pragma link "SLScope"
#pragma link "ALAudioOut"
#pragma link "ALBasicAudioOut"
#pragma link "ALCommonGen"
#pragma link "ALSignalGen"
#pragma link "SLCommonGen"
#pragma link "ALAmplifier"
#pragma link "ALCommonFilter"
#pragma link "SLCommonFilter"
#pragma link "ALCommonMeter"
#pragma link "ALDynamicRangeCompressor"
#pragma link "ALRMSMeter"
#pragma resource "*.dfm"
#pragma package(smart_init)
#pragma resource "*.dfm"
int i=0,test=0;
int sek=1,bat=0;
float ktr=1;
float kgain=10;
float Thres=1;
AnsiString out = "";
AnsiString out1= "";
AnsiString in1= "";
AnsiString in = "";

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
  waveInOpen;


 char str[256];

 int NumWaveDevs = waveInGetNumDevs ();
 for (i = 0; i < NumWaveDevs; i++)
 {
  WAVEINCAPS DevCaps;
  waveInGetDevCaps (i, &DevCaps, sizeof (DevCaps));
  sprintf(str,"%s",DevCaps.szPname);
  //Memo1->Lines->Add(str);
  //
  //sprintf(out,"%s",DevCaps.szPname);


  ComboBox1->Items->Add(str);

 // mes++;
 }
 //ALAudioOut1->Device=i;



  waveOutOpen;


 //char str[256];

 int NumWaveDevsOut = waveOutGetNumDevs ();
 for (i = 0; i < NumWaveDevsOut; i++)
 {
  WAVEOUTCAPS DevCaps;
  waveOutGetDevCaps (i, &DevCaps, sizeof (DevCaps));
  sprintf(str,"%s",DevCaps.szPname);
 // Memo1->Lines->Add(str);

  ComboBox2->Items->Add(str);
 // mes++;
 //mes=(ComboBox2->ItemIndex);
 }
  ReadParams();
  ComboParams();
  kgain=10-(((float)TrackBar4->Position/10));
  Thres=((1.18*(kgain+((float)TrackBar2->Position/4)))); //расчёт трешхолд
  Label7->Caption=FloatToStr(-1*kgain);
  ALDynamicRangeCompressor1->Threshold=-1*Thres;
  ProgressBar1->Position=Thres*4;
  Label5->Caption=FloatToStr(Thres);
  Label6->Caption=FloatToStr((float)TrackBar2->Position/4);
  if(((float)TrackBar2->Position/2)<25.5)
  {
    ALDynamicRangeCompressor1->Gain=(float)TrackBar2->Position/4;
    ALAmplifier1->Coefficient=1;
  }
  else
  {
    ALDynamicRangeCompressor1->Gain=25;
    ALAmplifier1->Coefficient=pow(10,((float)TrackBar2->Position/80)-1.25);
  };  
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
  ALAudioOut1->Enabled=false;
  ALAudioIn1->Enabled=false;
  ALAmplifier1->Enabled=false;
  ALDynamicRangeCompressor1->Enabled=false;
  ALAudioIn1->Device->DeviceName=in;
  Label1->Caption=in;
  ALAudioOut1->Device->DeviceName=out;
  Label2->Caption=out;
  ALAudioOut1->Enabled=true;
  ALAudioIn1->Enabled=true;
  ALAmplifier1->Enabled=true;
  ALDynamicRangeCompressor1->Enabled=true;
  WriteParams();
  Panel1->Color=clRed;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TrackBar1Change(TObject *Sender)
{
  ALDynamicRangeCompressor1->Release=pow(10,((float)TrackBar1->Position)/50);
  Label3->Caption=FloatToStr(pow(10,((float)TrackBar1->Position)/50));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TrackBar2Change(TObject *Sender)
{
  while(Thres>60)
  {
    TrackBar4->Position+=1; 
    Thres=((1.18*(kgain+((float)TrackBar2->Position/4)))); //расчёт трешхолд
  }
  while(Thres<0)
  {
    TrackBar4->Position-=1; 
    Thres=((1.18*(kgain+((float)TrackBar2->Position/4)))); //расчёт трешхолд
  }
  Thres=((1.18*(kgain+((float)TrackBar2->Position/4))));
  ALDynamicRangeCompressor1->Threshold=-1*Thres;
  Label6->Caption=FloatToStr((float)TrackBar2->Position/4);
  if(((float)TrackBar2->Position/2)<25.5)
  {
    ALDynamicRangeCompressor1->Gain=(float)TrackBar2->Position/4;
    ALAmplifier1->Coefficient=1;
  }
  else
  {
    ALDynamicRangeCompressor1->Gain=25;
    ALAmplifier1->Coefficient=pow(10,((float)TrackBar2->Position/80)-1.25);
  };
  ProgressBar1->Position=Thres*4;
  Label5->Caption=FloatToStr(Thres);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::TrackBar4Change(TObject *Sender)
{
  kgain=10-(((float)TrackBar4->Position/10));
  Thres=((1.18*(kgain+((float)TrackBar2->Position/4)))); //расчёт трешхолд
  if((Thres>60))TrackBar2->Position-=1;
  if(Thres<0)TrackBar2->Position+=1;
  Label7->Caption=FloatToStr(-1*kgain);
  ALDynamicRangeCompressor1->Threshold=-1*Thres;
  ProgressBar1->Position=Thres*4;
  Label5->Caption=FloatToStr(Thres);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ReadParams()
{
  TIniFile *ini = new TIniFile(ExtractFilePath(ParamStr(0)) + "set.ini");
  test=ini->ReadInteger("Tracks","Trackt",106);
  TrackBar4->Position=ini->ReadInteger("Tracks","Track4",106);
  TrackBar2->Position=ini->ReadInteger("Tracks","Track2",205);
  TrackBar1->Position=ini->ReadInteger("Tracks","Track1",145);
  Form1->Top=ini->ReadInteger("pos","Top",100);
  Form1->Left=ini->ReadInteger("pos","Left",50);
  in1=ini->ReadString("Device","in","");
  out1=ini->ReadString("Device","out","");
  delete ini;
}

void __fastcall TForm1::WriteParams()
{
  TIniFile *ini = new TIniFile(ExtractFilePath(ParamStr(0)) + "set.ini");
  ini->WriteInteger("Tracks","Trackt",20);
  ini->WriteInteger("Tracks","Track4",TrackBar4->Position);
  ini->WriteInteger("Tracks","Track2",TrackBar2->Position);
  ini->WriteInteger("Tracks","Track1",TrackBar1->Position);
  ini->WriteInteger("pos","Top",Form1->Top);
  ini->WriteInteger("pos","Left",Form1->Left);
  ini->WriteString("Device","out",out);//запись названия устройства
  ini->WriteString("Device","in",in);//запись названия устройства
  delete ini;
}
void __fastcall TForm1::ComboParams()
{
int iii=-1;
    do
    {
      iii++;
      if(iii>25)break;
    }
    while((CompareText(ComboBox2->Items->Strings[iii],out1))!=0);
    out=ComboBox2->Items->Strings[iii];

    Label2->Caption=out;
    ComboBox2->Text=out;
    if((CompareText(ComboBox2->Items->Strings[iii],""))==0)ComboBox2->Text="OUT dev";
    iii=-1;
    do
    {
      iii++;
      if(iii>25)break;
    }
    while((CompareText(ComboBox1->Items->Strings[iii],in1))!=0);
    in=ComboBox1->Items->Strings[iii];
    Label1->Caption=in;
    ComboBox1->Text=in;
    if((CompareText(ComboBox1->Items->Strings[iii],""))==0)ComboBox1->Text="IN dev";
}
void __fastcall TForm1::ComboBox2Change(TObject *Sender)
{
 out=ComboBox2->Items->Strings[ComboBox2->ItemIndex];
 out1=out;
  Label2->Caption=out1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
 in=ComboBox1->Items->Strings[ComboBox1->ItemIndex];
 in1=in;
  Label1->Caption=in1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
ALAudioOut1->Enabled=false;
ALAudioIn1->Enabled=false;
ALDynamicRangeCompressor1->Enabled=false;
ALAmplifier1->Enabled=false;
Panel1->Color=clBlue;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
WriteParams();
}
//---------------------------------------------------------------------------