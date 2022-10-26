#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

#define FILENAME_ERR -42
#define EMPTY_STRING -43
#define ARG_ERROR -44
#define FILE_ERROR -45


class File
{
	private :
		std::ifstream	originalFile_;
		std::ofstream	copyFile_;
		std::string 	ori_;
		std::string		subs_;
	
	public :
		File();
		File(std::string& ori, std::string& subs);
		~File();
	
	void	filePrep(const std::string fileName);
	void	copyContent();
	bool	findAndReplace(std::string *line);
	void	insert(size_t loc, std::string *line);
	void	displayInfoMsg();
};

void	exitIfEmptyOrInvalid(std::ofstream& file);
void	exitIfEmptyOrInvalid(std::ifstream& file);
void	closeFileIfOpen(std::ifstream& file1,
			std::ofstream& file2);
void	display_info_msg(std::string toBeReplaced,
			std::string substitute);
void	panic(int errcode);

#endif