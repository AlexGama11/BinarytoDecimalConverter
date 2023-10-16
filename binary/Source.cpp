#include <iostream>
#include <string>
#define toDigit(c) (c-'0')

int option;
std::string input;
int solution;
int base = 1;

enum class Methods
{
	 Table,
	 Doubling,

};

int main()
{
	std::cout << "Would you like to convert Binary to Decimal using the Table Method (Option 0) or using the Doubling Method (Option 1)" << std::endl;

	std::cin >> option;

	switch (Methods(option))
	{
	case Methods::Table:

		std::cout << "Input the number to convert to decimal" << std::endl;

		std::cin >> input;

		for (int i = input.size() - 1; i >= 0; i--)
		{	
			if (toDigit(input.at(i)) != 0 && toDigit(input.at(i)) != 1)
			{
				std::cout << "Please input a binary number!" << std::endl;

				break;
			}

			solution += toDigit(input.at(i)) * base;
			base *= 2;
		}

		std::cout << "Decimal is: " << solution << std::endl;

		break;

	case Methods::Doubling:

		break;

	default:

		break;

	}
}