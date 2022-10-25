# include "sed.hpp"

// default constructor
File::File()
: originalFile_(NULL)
, copyFile_(NULL)
, ori_(NULL)
, subs_(NULL)
{}

// constructor
File::File(std::string& ori,
	std::string& subs)
: ori_(ori)
, subs_(subs)
{
	if (ori_ == "" || subs_ == "")
		panic(EMPTY_STRING);
}

//destructor
File::~File()
{}

void		File::filePrep(const std::string fileName)
{
	closeFileIfOpen(originalFile_, copyFile_);
	if (fileName == "")
		panic(FILENAME_ERR);
	originalFile_.open(fileName.c_str());
	exitIfEmptyOrInvalid(originalFile_);
	std::string copyFileName = fileName + ".replace";
	copyFile_.open(copyFileName.c_str());
}

void	File::copyContent()
{
	std::string line;
	if (originalFile_ && copyFile_)
	{
		display_info_msg(ori_, subs_);
		while (std::getline(originalFile_, line))
		{
			findAndReplace(&line);
			copyFile_ << line << std::endl;
		}
		std::cout << "Copy finished" << std::endl;
	}
}

bool	File::findAndReplace(std::string *line)
{ 
	size_t loc = 0;
    while ((loc = line->find(ori_, loc)) != std::string::npos)
		insert(loc, line);
	
	return (0);
}

void	File::insert(size_t loc, std::string *line)
{
	for (size_t i = 0; i < subs_.size(); i++)
		line->insert(loc++, 1, subs_.at(i));
	line->erase(loc, ori_.size());
}