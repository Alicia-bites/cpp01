#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <cstdlib>
#include "colors.hpp"

#define LEVEL_UNKNOWN -42

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
		void	handleError(int errcode);
};

#endif