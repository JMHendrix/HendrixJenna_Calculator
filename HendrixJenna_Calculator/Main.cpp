#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator - Jenna", wxPoint(50,50), wxSize(285,420 ))
{
	//create and place the text ctrl where the answers will display.
	answerBox = new wxTextCtrl(this, 10022, "0", wxPoint(10, 10), wxSize(250, 60));

	//create and place the buttons (21)
	buttonOne = new wxButton(this, 10001, "1", wxPoint(10, 200), wxSize(60,60) );
	buttonTwo = new wxButton(this, 10002, "2", wxPoint(70, 200), wxSize(60, 60));
	buttonThree = new wxButton(this, 10003, "3", wxPoint(130, 200), wxSize(60, 60));
	buttonFour = new wxButton(this, 10004, "4", wxPoint(10, 140), wxSize(60, 60));
	buttonFive = new wxButton(this, 10005, "5", wxPoint(70, 140), wxSize(60, 60));
	buttonSix = new wxButton(this, 10006, "6", wxPoint(130, 140), wxSize(60, 60));
	buttonSeven = new wxButton(this, 10007, "7", wxPoint(10, 80), wxSize(60, 60));
	buttonEight = new wxButton(this, 10008, "8", wxPoint(70, 80), wxSize(60, 60));
	buttonNine = new wxButton(this, 10009, "9", wxPoint(130, 80), wxSize(60, 60));
	buttonZero = new wxButton(this, 10010, "0", wxPoint(70, 260), wxSize(60, 60));
	buttonDecimal = new wxButton(this, 10011, ".", wxPoint(10,260), wxSize(60, 60));
	buttonNegative = new wxButton(this, 10012, "-/+", wxPoint(130, 260), wxSize(60, 60));
	buttonAdd = new wxButton(this, 10013, "+", wxPoint(200, 80), wxSize(30, 60));
	buttonSubtract = new wxButton(this, 10014, "-", wxPoint(230, 80), wxSize(30, 60));
	buttonMultiply = new wxButton(this, 10015, "x", wxPoint(200, 140), wxSize(30, 60));
	buttonDivide = new wxButton(this, 10016, "/", wxPoint(230, 140), wxSize(30, 60));
	buttonBinary = new wxButton(this, 10017, "BINARY", wxPoint(200, 210), wxSize(60, 30));
	buttonHex = new wxButton(this, 10018, "HEX", wxPoint(200, 250), wxSize(60, 30));
	buttonModulo = new wxButton(this, 10019, "%", wxPoint(200, 290), wxSize(60, 30));
	buttonClear = new wxButton(this, 10020, "C", wxPoint(200, 330), wxSize(60, 40));
	buttonEqual = new wxButton(this, 10021, "=", wxPoint(10, 330), wxSize(180, 40));


}

Main::~Main()
{
}

void Main::OnButtonClicked(wxCommandEvent& event)
{
	double num1 = 0;

	switch (event.GetId()) {
	case 10001:
		number.append("1");
		answerBox->ChangeValue(number);
	case 10002:
		number.append("2");
	case 10003:
		number.append("3");
	case 10004:
		number.append("4");
	case 10005:
		number.append("5");
	case 10013:
		mathFunction = "ADD";
		 num1 = std::stod(number);
	case 10020:
		//clear the text
		answerBox->Clear();
	case 10021:
		double num2 = std::stod(number);
		double answer = 0;
		if (mathFunction == "ADD") {
			 answer = num1 + num2;
		}
		answerBox->ChangeValue(std::to_string(answer));

	}
	event.Skip();
}
