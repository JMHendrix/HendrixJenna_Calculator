#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
	EVT_BUTTON(10001, Main::OnButtonClicked)
	EVT_BUTTON(10002, Main::OnButtonClicked)
	EVT_BUTTON(10003, Main::OnButtonClicked)
	EVT_BUTTON(10004, Main::OnButtonClicked)
	EVT_BUTTON(10005, Main::OnButtonClicked)
	EVT_BUTTON(10006, Main::OnButtonClicked)
	EVT_BUTTON(10007, Main::OnButtonClicked)
	EVT_BUTTON(10008, Main::OnButtonClicked)
	EVT_BUTTON(10009, Main::OnButtonClicked)
	EVT_BUTTON(10010, Main::OnButtonClicked)
	EVT_BUTTON(10011, Main::OnButtonClicked)
	EVT_BUTTON(10012, Main::OnButtonClicked)
	EVT_BUTTON(10013, Main::OnButtonClicked)
	EVT_BUTTON(10014, Main::OnButtonClicked)
	EVT_BUTTON(10015, Main::OnButtonClicked)
	EVT_BUTTON(10016, Main::OnButtonClicked)
	EVT_BUTTON(10017, Main::OnButtonClicked)
	EVT_BUTTON(10018, Main::OnButtonClicked)
	EVT_BUTTON(10019, Main::OnButtonClicked)
	EVT_BUTTON(10020, Main::OnButtonClicked)
	EVT_BUTTON(10021, Main::OnButtonClicked)
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

	

	double num1 = 0;
	double num2 = 0;
}

Main::~Main()
{
}

void Main::OnButtonClicked(wxCommandEvent& event)
{

	std::string temp;

	switch (event.GetId()) {
	case 10001:
		//one
		number.append("1");
		answerBox->ChangeValue(number);
		break;
	case 10002:
		//two
		number.append("2");
		answerBox->ChangeValue(number);
		break;
	case 10003:
		//three
		number.append("3");
		answerBox->ChangeValue(number);
		break;
	case 10004:
		//four
		number.append("4");
		answerBox->ChangeValue(number);
		break;
	case 10005:
		//five
		number.append("5");
		answerBox->ChangeValue(number);
		break;
	case 10006:
		//six
		number.append("6");
		answerBox->ChangeValue(number);
		break;
	case 10007:
		//seven
		number.append("7");
		answerBox->ChangeValue(number);
		break;	
	case 10008:
		//eight
		number.append("8");
		answerBox->ChangeValue(number);
		break;	
	case 10009:
		//nine
		number.append("9");
		answerBox->ChangeValue(number);
		break;	
	case 10010:
		//zero
		number.append("0");
		answerBox->ChangeValue(number);
		break;
	case 10011:
		//decimal
		number.append(".");
		answerBox->ChangeValue(number);
		break;
	case 10012:
		//negative
		temp = number;
		number.append("(-)");
		answerBox->ChangeValue(number);
		break;
	case 10013:
		//add
		mathFunction = "ADD";
		number.append("+");
		answerBox->ChangeValue(number);
		break;
	case 10014:
		//subtract
		mathFunction = "SUBTRACT";
		number.append("-");
		answerBox->ChangeValue(number);
		break;
	case 10015:
		//multiply
		mathFunction = "MULTIPLY";
		number.append("*");
		answerBox->ChangeValue(number);
		break;
	case 10016:
		//divide
		mathFunction = "DIVIDE";
		number.append("/");
		answerBox->ChangeValue(number);
		break;
	case 10017:
		//binary
		mathFunction = "BINARY";
		number.append(" BINARY ");
		answerBox->ChangeValue(number);
		break;
	case 10018:
		//hex
		mathFunction = "HEX";
		number.append(" HEX ");
		answerBox->ChangeValue(number);
		break;
	case 10019:
		//mod
		mathFunction = "MOD";
		number.append("%");
		answerBox->ChangeValue(number);
		break;
	case 10020:
		//clear the text
		number.append(" C ");
		answerBox->ChangeValue(number);
		break;
	case 10021:
		//equals
		number.append("=");
		answerBox->ChangeValue(number);
		break;

	}
	event.Skip();
}
