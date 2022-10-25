#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str; 
	std::string &stringREF = str;

	std::cout << "stringPTR = " << stringPTR << std::endl; // accessing the memory address of the variable str.
	std::cout << "stringREF = " << &stringREF << std::endl << std::endl;

	std::cout << str << std::endl; // accessing the value of the variable str.
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return 0;
}