#include "Harl.hpp"

void	panicAndExit(int errcode)
{
	if (errcode == EMPTY_STRING)
		std::cerr << "Empty string!"
			<< std::endl
			<< std::endl;
	exit(errcode);
}

void	parse(std::string arg)
{
	if (arg.empty())
		panicAndExit(EMPTY_STRING);
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