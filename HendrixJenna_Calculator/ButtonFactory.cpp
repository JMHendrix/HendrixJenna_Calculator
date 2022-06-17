#include "ButtonFactory.h"
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

wxButton* ButtonFactory::CreateButtonOne(wxWindow* parent)
{
    wxButton* buttonOne = new wxButton(parent, 10001, "1", wxPoint(10, 200), wxSize(60,60));
    return buttonOne;
}


wxButton* ButtonFactory::CreateButtonTwo(wxWindow* parent)
{
    wxButton* buttonTwo = new wxButton(parent, 10002, "2", wxPoint(70, 200), wxSize(60, 60));
    return buttonTwo;
}

wxButton* ButtonFactory::CreateButtonThree(wxWindow* parent)
{
    wxButton* buttonThree = new wxButton(parent, 10003, "3", wxPoint(130, 200), wxSize(60, 60));
    return buttonThree;
}

wxButton* ButtonFactory::CreateButtonFour(wxWindow* parent)
{
    wxButton* buttonFour = new wxButton(parent, 10004, "4", wxPoint(10, 140), wxSize(60, 60));
    return buttonFour;
}

wxButton* ButtonFactory::CreateButtonFive(wxWindow* parent)
{
    wxButton* buttonFive = new wxButton(parent, 10005, "5", wxPoint(70, 140), wxSize(60, 60));
    return buttonFive;
}

wxButton* ButtonFactory::CreateButtonSix(wxWindow* parent)
{
    wxButton* buttonSix = new wxButton(parent, 10006, "6", wxPoint(130, 140), wxSize(60, 60));
    return buttonSix;
}

wxButton* ButtonFactory::CreateButtonSeven(wxWindow* parent)
{
    wxButton* buttonSeven = new wxButton(parent, 10007, "7", wxPoint(10, 80), wxSize(60, 60));
    return buttonSeven;
}

wxButton* ButtonFactory::CreateButtonEight(wxWindow* parent)
{
    wxButton* buttonEight = new wxButton(parent, 10008, "8", wxPoint(70, 80), wxSize(60, 60));
    return buttonEight;
}

wxButton* ButtonFactory::CreateButtonNine(wxWindow* parent)
{
    wxButton* buttonNine = new wxButton(parent, 10009, "9", wxPoint(130, 80), wxSize(60, 60));
    return buttonNine;
}

wxButton* ButtonFactory::CreateButtonZero(wxWindow* parent)
{
    wxButton* buttonZero = new wxButton(parent, 10010, "0", wxPoint(70, 260), wxSize(60, 60));
    return buttonZero;
}
wxButton* ButtonFactory::CreateButtonDecimal(wxWindow* parent)
{
    wxButton* buttonDecimal = new wxButton(parent, 10011, ".", wxPoint(10, 260), wxSize(60, 60));
    return buttonDecimal;
}

wxButton* ButtonFactory::CreateButtonNegative(wxWindow* parent)
{
    wxButton* buttonNegative = new wxButton(parent, 10012, "-/+", wxPoint(130, 260), wxSize(60, 60));
    return buttonNegative;
}

wxButton* ButtonFactory::CreateButtonAdd(wxWindow* parent)
{
    wxButton* buttonAdd = new wxButton(parent, 10013, "+", wxPoint(200, 80), wxSize(30, 60));
    return buttonAdd;
}

wxButton* ButtonFactory::CreateButtonSubtract(wxWindow* parent)
{
    wxButton* buttonSubtract = new wxButton(parent, 10014, "-", wxPoint(230, 80), wxSize(30, 60));
    return buttonSubtract;
}

wxButton* ButtonFactory::CreateButtonMultiply(wxWindow* parent)
{
    wxButton* buttonMultiply = new wxButton(parent, 10015, "x", wxPoint(200, 140), wxSize(30, 60));
    return buttonMultiply;
}

wxButton* ButtonFactory::CreateButtonDivide(wxWindow* parent)
{
    wxButton* buttonDivide = new wxButton(parent, 10016, "/", wxPoint(230, 140), wxSize(30, 60));
    return buttonDivide;
}

wxButton* ButtonFactory::CreateButtonBinary(wxWindow* parent)
{
    wxButton* buttonBinary = new wxButton(parent, 10017, "BINARY", wxPoint(200, 210), wxSize(60, 30));
    return buttonBinary;
}

wxButton* ButtonFactory::CreateButtonHex(wxWindow* parent)
{
    wxButton* buttonHex = new wxButton(parent, 10018, "HEX", wxPoint(200, 250), wxSize(60, 30));
    return buttonHex;
}

wxButton* ButtonFactory::CreateButtonModulo(wxWindow* parent)
{
    wxButton* buttonModulo = new wxButton(parent, 10019, "%", wxPoint(200, 290), wxSize(60, 30));
    return buttonModulo;
}

wxButton* ButtonFactory::CreateButtonClear(wxWindow* parent)
{
    wxButton* buttonClear = new wxButton(parent, 10020, "C", wxPoint(200, 330), wxSize(60, 40));
    return buttonClear;
}

wxButton* ButtonFactory::CreateButtonEqual(wxWindow* parent)
{
    wxButton* buttonEqual = new wxButton(parent, 10021, "=", wxPoint(10, 330), wxSize(180, 40));
    return buttonEqual;
}
