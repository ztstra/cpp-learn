#include <iostream>

// Basic input/output test program

int main()
{
	std::cout << "Enter three numbers: ";
	
	int a{};
	std::cin >> a;
	int b{};
	std::cin >> b;
	int c{};
	std::cin >> c;

	std::cout << "You entered: " << a << ", " << b << ", " << "and " << c << ".\n";
	return 0;
}