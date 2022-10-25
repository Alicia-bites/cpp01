#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <cstdlib>

# define SPRINGGREEN1 "\033[38;5;48m"
# define SPRINGGREEN2 "\033[38;5;42m"
# define SPRINGGREEN3 "\033[38;5;47m"
# define SPRINGGREEN4 "\033[38;5;35m"
# define SPRINGGREEN5 "\033[38;5;41m"
# define SPRINGGREEN6 "\033[38;5;29m"
# define RESET "\033[0m"
#define LEVEL_UNKNOWN -42
#define INVALID_ARGUMENT -43
#define EMPTY_STRING -44

class Harl
{
	typedef  void (Harl::*HarlMemFn)();

	private :
		void 			debug();
		void 			info();
		void 			warning();
		void 			error();
		void			defineFilterLevel();
		
		std::string		filter_;
		int				filterLevel_;

		static std::string levels_[4];

	public :
		Harl();
		Harl(std::string filter);
		~Harl();

		void 	filter();
		void	complain(std::string level);
};

void	handleError(int errcode);

#endif