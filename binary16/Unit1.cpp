//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <math.h>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
int x=0;
float X=0;
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1Change(TObject *Sender)
{
Label1->Caption="Set";
try
 {
 X=StrToFloat(Edit1->Text);
 }
catch (EConvertError &e)
 {
 Label1->Caption="Error";
 return;
 };
if(X!=floor(X))
{Label1->Caption="!!!";};
x=X;
//-------------------------------------
 if(x&(1<<7))
 {
 Panel1->Color=clYellow;
 Panel1->Font->Color=0;
 }
 else
 {Panel1->Color=0;
 Panel1->Font->Color=clYellow;
 };

 if(x&(1<<6))
 {
 Panel9->Color=clYellow;
 Panel9->Font->Color=0;
 }
 else
 {Panel9->Color=0;
 Panel9->Font->Color=clYellow;

 };
 if(x&(1<<5))
 {
 Panel3->Color=clYellow;
 Panel3->Font->Color=0;
 }
 else
 {Panel3->Color=0;
 Panel3->Font->Color=clYellow;

 };
 if(x&(1<<4))
 {
 Panel4->Color=clYellow;
 Panel4->Font->Color=0;
 }
 else
 {Panel4->Color=0;
 Panel4->Font->Color=clYellow;

 };
 if(x&(1<<3))
 {
 Panel5->Color=clYellow;
 Panel5->Font->Color=0;
 }
 else
 {Panel5->Color=0;
 Panel5->Font->Color=clYellow;

 };
 if(x&(1<<2))
 {
 Panel6->Color=clYellow;
 Panel6->Font->Color=0;
 }
 else
 {Panel6->Color=0;
 Panel6->Font->Color=clYellow;

 };
 if(x&(1<<1))
 {
 Panel7->Color=clYellow;
 Panel7->Font->Color=0;
 }
 else
 {Panel7->Color=0;
 Panel7->Font->Color=clYellow;

 };
 if(x&(1<<0))
 {
 Panel8->Color=clYellow;
 Panel8->Font->Color=0;
 }
 else
 {Panel8->Color=0;
 Panel8->Font->Color=clYellow;
 };
 if(x&(1<<8))
 {
 Panel11->Color=clYellow;
 Panel11->Font->Color=0;
 }
 else
 {Panel11->Color=0;
 Panel11->Font->Color=clYellow;
 };
 if(x&(1<<9))
 {
 Panel12->Color=clYellow;
 Panel12->Font->Color=0;
 }
 else
 {Panel12->Color=0;
 Panel12->Font->Color=clYellow;
 };
 if(x&(1<<10))
 {
 Panel13->Color=clYellow;
 Panel13->Font->Color=0;
 }
 else
 {Panel13->Color=0;
 Panel13->Font->Color=clYellow;
 };
 if(x&(1<<11))
 {
 Panel14->Color=clYellow;
 Panel14->Font->Color=0;
 }
 else
 {Panel14->Color=0;
 Panel14->Font->Color=clYellow;
 };
 if(x&(1<<12))
 {
 Panel15->Color=clYellow;
 Panel15->Font->Color=0;
 }
 else
 {Panel15->Color=0;
 Panel15->Font->Color=clYellow;
 };
 if(x&(1<<13))
 {
 Panel16->Color=clYellow;
 Panel16->Font->Color=0;
 }
 else
 {Panel16->Color=0;
 Panel16->Font->Color=clYellow;
 };
 if(x&(1<<14))
 {
 Panel17->Color=clYellow;
 Panel17->Font->Color=0;
 }
 else
 {Panel17->Color=0;
 Panel17->Font->Color=clYellow;
 };
 if(x&(1<<15))
 {
 Panel18->Color=clYellow;
 Panel18->Font->Color=0;
 }
 else
 {Panel18->Color=0;
 Panel18->Font->Color=clYellow;
 };
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel8Click(TObject *Sender)
{
if(x&(1<<0))
{x=x-1;}
else
{x=x+1;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel7Click(TObject *Sender)
{
if(x&(1<<1))
{x=x-2;}
else
{x=x+2;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel6Click(TObject *Sender)
{
if(x&(1<<2))
{x=x-4;}
else
{x=x+4;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel5Click(TObject *Sender)
{
if(x&(1<<3))
{x=x-8;}
else
{x=x+8;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel4Click(TObject *Sender)
{
if(x&(1<<4))
{x=x-16;}
else
{x=x+16;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel3Click(TObject *Sender)
{
if(x&(1<<5))
{x=x-32;}
else
{x=x+32;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel9Click(TObject *Sender)
{
if(x&(1<<6))
{x=x-64;}
else
{x=x+64;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel1Click(TObject *Sender)
{
if(x&(1<<7))
{x=x-128;}
else
{x=x+128;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel11Click(TObject *Sender)
{
if(x&(1<<8))
{x=x-256;}
else
{x=x+256;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel12Click(TObject *Sender)
{
if(x&(1<<9))
{x=x-512;}
else
{x=x+512;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel13Click(TObject *Sender)
{
if(x&(1<<10))
{x=x-1024;}
else
{x=x+1024;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel14Click(TObject *Sender)
{
if(x&(1<<11))
{x=x-2048;}
else
{x=x+2048;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel15Click(TObject *Sender)
{
if(x&(1<<12))
{x=x-4096;}
else
{x=x+4096;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel16Click(TObject *Sender)
{
if(x&(1<<13))
{x=x-8192;}
else
{x=x+8192;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel17Click(TObject *Sender)
{
if(x&(1<<14))
{x=x-16384;}
else
{x=x+16384;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel18Click(TObject *Sender)
{
if(x&(1<<15))
{x=x-32768;}
else
{x=x+32768;};
Edit1->Text=FloatToStr(x);
}
//---------------------------------------------------------------------------

