//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TPanel *Panel1;
        TPanel *Panel2;
        TPanel *Panel3;
        TPanel *Panel4;
        TPanel *Panel5;
        TPanel *Panel6;
        TPanel *Panel7;
        TPanel *Panel8;
        TPanel *Panel9;
        TLabel *Label1;
        TPanel *Panel10;
        TPanel *Panel11;
        TPanel *Panel12;
        TPanel *Panel13;
        TPanel *Panel14;
        TPanel *Panel15;
        TPanel *Panel16;
        TPanel *Panel17;
        TPanel *Panel18;
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall Panel8Click(TObject *Sender);
        void __fastcall Panel7Click(TObject *Sender);
        void __fastcall Panel6Click(TObject *Sender);
        void __fastcall Panel5Click(TObject *Sender);
        void __fastcall Panel4Click(TObject *Sender);
        void __fastcall Panel3Click(TObject *Sender);
        void __fastcall Panel9Click(TObject *Sender);
        void __fastcall Panel1Click(TObject *Sender);
        void __fastcall Panel11Click(TObject *Sender);
        void __fastcall Panel12Click(TObject *Sender);
        void __fastcall Panel13Click(TObject *Sender);
        void __fastcall Panel14Click(TObject *Sender);
        void __fastcall Panel15Click(TObject *Sender);
        void __fastcall Panel16Click(TObject *Sender);
        void __fastcall Panel17Click(TObject *Sender);
        void __fastcall Panel18Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
