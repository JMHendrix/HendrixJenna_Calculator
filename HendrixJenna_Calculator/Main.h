#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();

public:

//numeric buttons
	wxButton* buttonOne;
	wxButton* buttonTwo;
	wxButton* buttonThree;
	wxButton* buttonFour;
	wxButton* buttonFive;
	wxButton* buttonSix;
	wxButton* buttonSeven;
	wxButton* buttonEight;
	wxButton* buttonNine;
	wxButton* buttonZero;	
	wxButton* buttonDecimal;
	wxButton* buttonNegative;

	wxButton* buttonAdd;
	wxButton* buttonSubtract;
	wxButton* buttonMultiply;
	wxButton* buttonDivide;
	wxButton* buttonBinary;
	wxButton* buttonHex;
	wxButton* buttonModulo;
	wxButton* buttonClear;
	wxButton* buttonEqual;

	wxTextCtrl* answerBox;
	
	double num1;
	double num2;
	std::string number;
	std::string mathFunction;

	void OnButtonClicked(wxCommandEvent &event);
	wxDECLARE_EVENT_TABLE();
};

