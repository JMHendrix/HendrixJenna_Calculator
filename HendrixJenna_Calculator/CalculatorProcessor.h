#pragma once
#include <string>
class CalculatorProcessor
{
private:
	CalculatorProcessor() {}
	static CalculatorProcessor* _processor;
	int baseNumber;
public:
	static CalculatorProcessor* GetInstance() {
		if (_processor == nullptr) {
			_processor = new CalculatorProcessor();
		}
		return _processor;
	} //returns a static Processor //this will be how we access the _processor, since it is private

	void SetBaseNumber(int number) {
		baseNumber = number;
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete; //copy constructor
	void operator=(const CalculatorProcessor& other) = delete; //assignment operator


	static int GetAddition(int num1, int num2) {
		std::string result = "";
		int num3 = num1 + num2;
		result = std::to_string(num3);

	}

	std::string GetSubtraction(int num1, int num2) {
		std::string result = "";
		int num3 = num1 - num2;
		result = std::to_string(num3);
		return result;
	}

	std::string GetMultiplication(int num1, int num2) {
		std::string result = "";
		int num3 = num1 * num2;
		result = std::to_string(num3);
		return result;
	}

	std::string GetDivision(int num1, int num2) {
		std::string result = "";
		int num3 = num1 / num2;
		result = std::to_string(num3);
		return result;
	}

	std::string GetDecimal() {
		return std::to_string(baseNumber);
	}

	std::string GetHexadecimal() {
		std::string results = "";
		int number = baseNumber;
		while (number > 0) {
			int mod = number % 16;
			if (mod < 10) {
				results = std::to_string(mod) + results;

			}
			else if (mod == 10) {
				results = "A" + results;
			}
			else if (mod == 11) {
				results = "B" + results;
			}
			else if (mod == 12) {
				results = "C" + results;
			}
			else if (mod == 13) {
				results = "D" + results;
			}
			else if (mod == 14) {
				results = "E" + results;
			}
			else if (mod == 15) {
				results = "F" + results;
			}
			number = number / 16;
		}
		results = "0x" + results;
		return results;
	}

	std::string GetBinary() {
		std::string results = "";
		int number = baseNumber;
		for (int i = 0; i < 32; i++) {
			//determine whether or not the first number should be a 0 or 1
			//if 1st num = 0 , even, 1 odd
			if (number % 2 == 0) {
				results = "0" + results;
			}
			else {
				results = "1" + results;
			}
			number = number / 2;


		}

		return results;
	}


};

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;
