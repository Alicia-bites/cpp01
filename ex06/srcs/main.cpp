#include "Harl.hpp"

void	handleError(int errcode)
{
	if (errcode == LEVEL_UNKNOWN)
		std::cout << "[ Probably complaining about insignificant problems ]"
			<< std::endl
			<< std::endl;
	if (errcode == INVALID_ARGUMENT)
		std::cerr << "String can only be characters"
			<< std::endl
			<< std::endl;
	if (errcode == EMPTY_STRING)
		std::cerr << "Empty string!"
			<< std::endl
			<< std::endl;
	exit(errcode);
}

void	parse(std::string arg)
{
	if (arg.empty())
		handleError(EMPTY_STRING);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error ! Invalid number of argument(s)."
			<< std::endl;
		return (0);
	}
	parse(argv[1]);
	Harl harl(argv[1]);

	harl.filter();
	return (0);
}