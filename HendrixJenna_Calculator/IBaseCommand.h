#pragma once
#include "Main.h"
class IBaseCommand
{
public:
	virtual void Execute(int num1, int num2, Main* main1) = 0;
};

