//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include <string>
#include <sstream>
#include <mmsystem.h>

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
char *strf[64];
short wav[48000];
short bufl=0, bufr=0;
float c;
double bl=0, br=0,r=0,l=0;
float z=0;
unsigned long i=0;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Open1Click(TObject *Sender)
{
if(Open->Execute())
*strf=(Open->FileName).c_str();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 using namespace std;
struct  WAV_HEADER
{
        char                RIFF[4];        // RIFF Header      Magic header
        unsigned long       ChunkSize;      // RIFF Chunk Size
        char                WAVE[4];        // WAVE Header
        char                fmt[4];         // FMT header
        unsigned long       Subchunk1Size;  // Size of the fmt chunk
        unsigned short      AudioFormat;    // Audio format 1=PCM,6=mulaw,7=alaw, 257=IBM Mu-Law, 258=IBM A-Law, 259=ADPCM
        unsigned short      NumOfChan;      // Number of channels 1=Mono 2=Sterio
        unsigned long       SamplesPerSec;  // Sampling Frequency in Hz
        unsigned long       bytesPerSec;    // bytes per second
        unsigned short      blockAlign;     // 2=16-bit mono, 4=16-bit stereo
        unsigned short      bitsPerSample;  // Number of bits per sample
        char                Subchunk2ID[4]; // "data"  string
        unsigned long       Subchunk2Size;  // Sampled data length
};
  WAV_HEADER wavHeader;
  int headerSize = sizeof(wavHeader);
  FILE *Filer;
  Filer = fopen (*strf, "rb");
  FILE *Filew;
  Filew = fopen ("out.wav", "wb");
  if ((Filew!=NULL)||(Filer!=NULL))
  {
  fread(&wavHeader,headerSize,1,Filer);
   Memo1->Lines->Add(IntToStr((__int64)wavHeader.Subchunk2Size));
   Memo1->Lines->Add(IntToStr((__int64)wavHeader.ChunkSize));
   Memo1->Lines->Add(IntToStr((__int64)wavHeader.Subchunk1Size));

 // fread(&h,1,48,Filer);
  fwrite(&wavHeader,headerSize,1,Filew);
  i=0;
  c=20;
  while(i<((wavHeader.Subchunk2Size)/4))
     {fread(&bufl,2,1,Filer);
      fread(&bufr,2,1,Filer);

      br=bufr;
      bl=bufl;

      if(br<0)
      {
      r=(-br);
      }
      else
      {
      r=br;
      };

      c=1.0004*c;

      if(r>60)
          {
          if(32000<(c*r))
             {
              c=(32000/r);
             };
          };


      br=(br*c);
      bl=(bl*c);
      if(br>=32768)
      {
      br=32767;
      };
      if(br<(-32768))
      {
      br=-32768;
      };

      if(bl>=32768)
      {
      bl=32767;
      };
      if(bl<(-32768))
      {
      bl=-32768;
      };

      bufr=((short)br);
      bufl=((short)bl);
      fwrite(&bufl,2,1,Filew);
      fwrite(&bufr,2,1,Filew);
      i++;
     };
  }
  else            //32768
  {Label1->Caption="Ошибка I/O!!!";
  };
  fclose;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{

 using namespace std;
struct  WAV_HEADER
{
        char                RIFF[4];        // RIFF Header      Magic header
        unsigned long       ChunkSize;      // RIFF Chunk Size
        char                WAVE[4];        // WAVE Header
        char                fmt[4];         // FMT header
        unsigned long       Subchunk1Size;  // Size of the fmt chunk
        unsigned short      AudioFormat;    // Audio format 1=PCM,6=mulaw,7=alaw, 257=IBM Mu-Law, 258=IBM A-Law, 259=ADPCM
        unsigned short      NumOfChan;      // Number of channels 1=Mono 2=Sterio
        unsigned long       SamplesPerSec;  // Sampling Frequency in Hz
        unsigned long       bytesPerSec;    // bytes per second
        unsigned short      blockAlign;     // 2=16-bit mono, 4=16-bit stereo
        unsigned short      bitsPerSample;  // Number of bits per sample
        char                Subchunk2ID[4]; // "data"  string
        unsigned long       Subchunk2Size;  // Sampled data length
};



  WAV_HEADER wavHeader;
  int headerSize = sizeof(wavHeader);
long pos=44;
 unsigned char bfl=0,bfr=0,chektip=0,bits='8';  //chektip - стерео или моно
 double suml=0,sumr=0;
 long bufli=0,bufri=0,conr=0,conl=0;
 int schot=20000,ready=0;
 double srr=0,srl=0;
 double razl=0,razr=0;
 //char tip=0;
 char buf[38]={0};
 short x=0;
 double y=0;
 int j=10000,con=0,ts=0;
 float f=0,pikfak=0,dbl=0;

 FILE *file;
 if((file=fopen(*strf,"rb"))==0)
  {
  goto ender;
  }

  fread(&wavHeader,headerSize,1,file);
  chektip=wavHeader.NumOfChan;
  bits=(wavHeader.blockAlign/chektip);

do
{
  if(bits==1)
   {
   Label6->Caption="8бит";
   ready=schot;
//   fseek(file,pos,0);
   do
    {
    ready--;
    fread(&bfl,1,1,file);
    if(feof(file)!=0)
     {
     goto ender;
     }
    if(chektip==2)
     fread(&bfr,1,1,file);
    if(feof(file)!=0)
     {
     goto ender;
     }
    bufli=(long)bfl;
    bufri=(long)bfr;
    bufli-=128;
    bufri-=128;
    if(bufli<0)
     bufli=-bufli;
    if(bufri<0)
     bufri=-bufri;
    suml=suml+(double)bufli;
    sumr=sumr+(double)bufri;
    if(conl<bufli)
     conl=bufli;
    if(conr<bufri)
     conr=bufri;
    }
   while(ready>0);
 //  pos=ftell(file);
   }
  else
  {
   ready=schot;
   conr=0;
   conl=0;
   ts=j;
   do
    {

    ready--;
    if(((fread(&bufl,2,1,file))==0))
     {
     goto ender;
     };
    if(chektip==2)
    if((fread(&bufr,2,1,file))==0)
     {
     goto ender;
     }
    bufli=(long)bufl;
    bufri=(long)bufr;
    if(bufli<0)
     bufli=(-bufli);
    if(bufri<0)
     bufri=(-bufri);
    suml=suml+(double)bufli;
    sumr=sumr+(double)bufri;
    if(conl<bufli)
     conl=bufli;
    if(conr<bufri)
     conr=bufri;
    }
   while(ready>0);
   Label6->Caption="16бит";
  }   //конец else
 konec:
 srl=suml/(double)schot;
 srr=sumr/(double)schot;
 Label7->Caption=srl;
 razl=(double)conl/srl;
 razr=(double)conr/srr;
 Label1->Caption=razl;
 Label5->Caption=razr;
 //schot=0;
 suml=0;
 sumr=0;
 goto ender;
}
 while(1);
 ender:
 fclose(file);

 }













