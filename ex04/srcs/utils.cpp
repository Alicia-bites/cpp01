# include "sed.hpp"

void	display_info_msg(std::string toBeReplaced,
	std::string substitute)
{
	std::cout
		<< "Replacing every \""
		<< toBeReplaced
		<< "\" with \""
		<< substitute
		<< "\"!"
		<< std::endl;
}

void	closeFileIfOpen(std::ifstream& file1, std::ofstream& file2)
{
	if (file1.is_open())
		file1.close();
	if (file2.is_open())
		file2.close();
}

void	exitIfEmptyOrInvalid(std::ifstream& file)
{
	if (file.peek() == EOF)
	{
		std::cout << "Empty file, invalid type or cannot open file. Nothing to copy."
			<< std::endl;
		exit(0);
	}
}

void	exitIfEmptyOrInvalid(std::ofstream& file)
{
	if (file.good() == 0)
	{
		std::cout << "Invalid type or cannot open file. Nothing to copy."
			<< std::endl;
		exit(0);
	}
}


void	panic(int errcode)
{
	if (errcode == FILENAME_ERR)
		std::cout << "Filename can't be empty an empty string!"
			<< std::endl;
	else if (errcode == EMPTY_STRING)
		std::cout << "Searched string or substitute string can't be empty."
			<< std::endl;
	else if (errcode == ARG_ERROR)
		std::cout << "Invalid number of arguments."
			<< std::endl;
	else if (errcode == FILE_ERROR)
		std::cout << "Couldn't open file." << std::endl;
	else if (errcode == TWINS_STRING)
		std::cout << "String to replace cannot be identical to replacement."
			<< std::endl;
	exit(errcode);
}
