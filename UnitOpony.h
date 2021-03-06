//---------------------------------------------------------------------------

#ifndef UnitOponyH
#define UnitOponyH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TFlowLayout *FlowLayout1;
	TLabel *Label1;
	TFlowLayoutBreak *FlowLayoutBreak1;
	TComboBox *ComboBoxSN;
	TLabel *Label2;
	TComboBox *ComboBoxAR;
	TLabel *Label3;
	TComboBox *ComboBoxDR;
	TFlowLayoutBreak *FlowLayoutBreak2;
	TLabel *Label4;
	TEdit *Edit1;
	TFlowLayoutBreak *FlowLayoutBreak3;
	TLabel *Label5;
	TLabel *LabelSrednicaKola;
	TFlowLayoutBreak *FlowLayoutBreak4;
	TLabel *Label6;
	TLabel *LabelObwodKola;
	TFlowLayoutBreak *FlowLayoutBreak5;
	TLabel *Label7;
	TLabel *LabelOdpowiedz;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ComboBoxSNChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
