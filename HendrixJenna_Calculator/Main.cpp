#include "Main.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator - Jenna", wxPoint(50,50), wxSize(285,420 ))
{
	ButtonFactory factory;
	//create and place the text ctrl where the answers will display.
	answerBox = new wxTextCtrl(this, 10022, "0", wxPoint(10, 10), wxSize(250, 60));

	//create and place the buttons (21)
	buttonOne = factory.CreateButtonOne(this);	
	buttonTwo = factory.CreateButtonTwo(this);
	buttonThree = factory.CreateButtonThree(this);
	buttonFour = factory.CreateButtonFour(this);
	buttonFive = factory.CreateButtonFive(this);
	buttonSix = factory.CreateButtonSix(this);
	buttonSeven = factory.CreateButtonSeven(this);
	buttonEight = factory.CreateButtonEight(this);
	buttonNine = factory.CreateButtonNine(this);
	buttonZero = factory.CreateButtonZero(this);

	buttonDecimal = factory.CreateButtonDecimal(this);
	buttonNegative = factory.CreateButtonNegative(this);
	buttonAdd = factory.CreateButtonAdd(this);
	buttonSubtract = factory.CreateButtonSubtract(this);
	buttonMultiply = factory.CreateButtonMultiply(this);
	buttonDivide = factory.CreateButtonDivide(this);
	buttonBinary = factory.CreateButtonBinary(this);
	buttonHex = factory.CreateButtonHex(this);
	buttonModulo = factory.CreateButtonModulo(this);
	buttonClear = factory.CreateButtonClear(this);
	buttonEqual = factory.CreateButtonEqual(this);
	

	double num1 = 0;
	double num2 = 0;
}

Main::~Main()
{
}

void Main::OnButtonClicked(wxCommandEvent& event)
{
	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
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
		number = "-" + temp;
		answerBox->ChangeValue(number);
		break;
	case 10013:
		//add
		mathFunction = "ADD";
		num1 = std::stoi(number);
		number = "";
		answerBox->ChangeValue("+ ");
		break;
	case 10014:
		//subtract
		mathFunction = "SUBTRACT";
		num1 = std::stoi(number);
		number = "";
		answerBox->ChangeValue("- ");
		break;
	case 10015:
		//multiply
		mathFunction = "MULTIPLY";
		num1 = std::stoi(number);
		number = "";
		answerBox->ChangeValue("* ");
		break;
	case 10016:
		//divide
		mathFunction = "DIVIDE";
		num1 = std::stoi(number);
		number = "";
		answerBox->ChangeValue("/ ");
		break;
	case 10017:
		//binary
		processor->SetBaseNumber(std::stoi(number));
		number = "";
		processor->GetBinary(this);
		break;
	case 10018:
		//hex
		mathFunction = "HEX";
		processor->SetBaseNumber(std::stoi(number));
		number = "";
		processor->GetHexadecimal(this);
		break;
	case 10019:
		//mod
		mathFunction = "MOD";
		num1 = std::stoi(number);
		number = "";
		answerBox->ChangeValue("% ");
		break;
	case 10020:
		//clear the text
		processor->Clear(this);
		break;
	case 10021:
		//equals
		number.append("=");
		answerBox->ChangeValue(number);
		num2 = std::stod(number);
		number = "";
		if (mathFunction == "ADD") {
			processor->GetAddition(num1, num2, this);
		}
		else if (mathFunction == "SUBTRACT") {
			processor->GetSubtraction(num1, num2, this);
		}
		else if (mathFunction == "MULTIPLY") {
			processor->GetMultiplication(num1, num2, this);
		}
		else if (mathFunction == "DIVIDE") {
			processor->GetDivision(num1, num2, this);
		}
		else if (mathFunction == "MOD") {
			processor->GetModulo(num1, num2, this);
		}
		break;
	}
	event.Skip();
}
