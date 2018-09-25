//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "UnitOpony.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.NmXhdpiPh.fmx", _PLAT_ANDROID)

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	AnsiString s;
	// Wysoko�� profilu
	for (int i = 30; i <= 85; i+=5) ComboBoxAR->Items->Add(i);
	// Szeroko�� przekroju
	for (int i = 95; i <= 355; i+=10) ComboBoxSN->Items->Add(i);
	// �rednica felgi
	for (int i = 11; i <= 23; i++)   ComboBoxDR->Items->Add(i);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBoxSNChange(TObject *Sender)
{
	float dr=0;
	float sn=0;
	float ar=0;
	float d=0;
	float o=0;
	AnsiString s;
	
	if (ComboBoxDR->ItemIndex!=-1) dr=StrToInt(ComboBoxDR->Items->Strings[ComboBoxDR->ItemIndex])*25.4;	
	if (ComboBoxSN->ItemIndex!=-1) sn=StrToInt(ComboBoxSN->Items->Strings[ComboBoxSN->ItemIndex]);
	if (ComboBoxAR->ItemIndex!=-1) ar=StrToInt(ComboBoxAR->Items->Strings[ComboBoxAR->ItemIndex])/100.0;
	d=dr+2*sn*ar;
	o=3.14*d;

	if (dr==0 || sn==0 || ar==0) 
	{	
		LabelSrednicaKola->Text="???";	
		LabelObwodKola->Text="???";
	}
	else    						
	{
		LabelSrednicaKola->Text=s.sprintf("%0.2f mm",d);
		LabelObwodKola->Text=s.sprintf("%0.2f mm",o);
	}


	
}
//---------------------------------------------------------------------------
