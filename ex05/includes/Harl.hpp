#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include "colors.hpp"


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