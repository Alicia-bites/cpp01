# include "sed.hpp"



int main(int argc, char **argv)
{
	if (argc != 4)
		panic(ARG_ERROR);
	std::string one(argv[1]);
	std::string two(argv[2]);
	std::string three(argv[3]);

	File thisFile(two, three);

	thisFile.filePrep(one);
	thisFile.copyContent();
	
	return (0);
}