#pragma once
#include "wx/wx.h"
#include "Main.h"

class Calculator: public wxApp
{
public:
	Calculator();
	~Calculator();

private:
	Main* main_frame1 = nullptr;

public:
	virtual bool OnInit();
};

