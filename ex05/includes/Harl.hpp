#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

# define SPRINGGREEN1 "\033[38;5;48m"
# define SPRINGGREEN2 "\033[38;5;42m"
# define SPRINGGREEN3 "\033[38;5;47m"
# define SPRINGGREEN4 "\033[38;5;35m"
# define SPRINGGREEN5 "\033[38;5;41m"
# define SPRINGGREEN6 "\033[38;5;29m"
# define RESET "\033[0m"

class Harl
{
	typedef  void (Harl::*HarlMemFn)();

	private :
		void debug();
		void info();
		void warning();
		void error();

	public :
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif