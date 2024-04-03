#include <iostream>

void FindOddNumbers(int Limit, bool IsOdd)
{
	for (int i = 1; i <= Limit; i++) {
		if (IsOdd == true && i % 2 != 0) {
			std::cout << i << "\n";
		}
		else if (IsOdd == false && i % 2 == 0) {
			std::cout << i << "\n";
		}
	}
};


int main()
{
	int variable, isOdd;
	std::cout << "enter a variable: ";
	std::cin >> variable;
	std::cout << "which numbers should be even or not (1 odd , 2 even): ";
	std::cin >> isOdd;
	for (int i = 1; i <= variable; i++)
		{
		std::cout << i << "\n";
		}
	if (isOdd == 1) {
		std::cout << "\n";
		FindOddNumbers(variable, true);
	}
	else if (isOdd == 2) {
		std::cout << "\n";
		FindOddNumbers(variable, false);
	}
	else {
		std::cout << "To print even or odd numbers, enter the correct number!";
	}
	
}