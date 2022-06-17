#pragma once
#include "wx/wx.h"
class ButtonFactory
{
public:
	wxButton* CreateButtonOne(wxWindow* parent);
	wxButton* CreateButtonTwo(wxWindow* parent);
	wxButton* CreateButtonThree(wxWindow* parent);
	wxButton* CreateButtonFour(wxWindow* parent);
	wxButton* CreateButtonFive(wxWindow* parent);
	wxButton* CreateButtonSix(wxWindow* parent);
	wxButton* CreateButtonSeven(wxWindow* parent);
	wxButton* CreateButtonEight(wxWindow* parent);
	wxButton* CreateButtonNine(wxWindow* parent);
	wxButton* CreateButtonZero(wxWindow* parent);
	wxButton* CreateButtonDecimal(wxWindow* parent);
	wxButton* CreateButtonNegative(wxWindow* parent);
	wxButton* CreateButtonAdd(wxWindow* parent);
	wxButton* CreateButtonSubtract(wxWindow* parent);
	wxButton* CreateButtonMultiply(wxWindow* parent);
	wxButton* CreateButtonDivide(wxWindow* parent);
	wxButton* CreateButtonBinary(wxWindow* parent);
	wxButton* CreateButtonHex(wxWindow* parent);
	wxButton* CreateButtonModulo(wxWindow* parent);
	wxButton* CreateButtonClear(wxWindow* parent);
	wxButton* CreateButtonEqual(wxWindow* parent);

};

