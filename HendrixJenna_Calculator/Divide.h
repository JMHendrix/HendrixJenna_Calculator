#pragma once
#include "IBaseCommand.h"
#include "Main.h"
#include <string>

class Divide : public IBaseCommand
{
public:
	int number1;
	int number2;
	Main* main;

	void GetDivision() {
		std::string result = "";
		int num3 = number1 / number2;
		result = std::to_string(num3);
		main->answerBox->ChangeValue(result);

	}

	void Execute(int num1, int num2, Main * main1) {
		number1 = num1;
		number2 = num2;
		main = main1;
		GetDivision();
	}
};

