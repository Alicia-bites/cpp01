#include "Harl.hpp"

void	exitIfError(std::string arg)
{
	for (size_t i = 0; i < arg.size(); i++)
		if (!isalpha(arg.at(i)))
		{
			std::cerr << "Invalid argument."
				<< std::endl
				<< "Can only be either one of those :"
				<< std::endl
				<< "debug"
				<< std::endl
				<< "info"
				<< std::endl
				<< "warning"
				<< std::endl
				<< "error"
				<< std::endl;
			exit(0);
		}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error ! Invalid number of argument(s)."
			<< std::endl;
		return (0);
	}
	exitIfError(argv[1]);
	// filter(argv[1]);
	Harl harl(argv[1]);

	harl.filter();
	return (0);
}