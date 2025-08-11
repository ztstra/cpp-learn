#include <iostream>

// Using return values as arguments

// solution 01, working

/* int getUserInput()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
	
	return input;
}

void doubleNumber(int num)
{
	std::cout << num << " doubled is " << num * 2 << '\n';
}

int main()
{
	doubleNumber(getUserInput()); 

	return 0;
} */

int doubleNumber(int x)
{
	return 2 * x;
}

int main()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;
	std::cout << doubleNumber(x) << '\n';

	return 0;
}