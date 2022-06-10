#include "Calculator.h"

wxIMPLEMENT_APP(Calculator);

Calculator::Calculator()
{
}

Calculator::~Calculator()
{
}

bool Calculator::OnInit()
{
	main_frame1 = new Main();
	main_frame1->Show();
	return true;
}
