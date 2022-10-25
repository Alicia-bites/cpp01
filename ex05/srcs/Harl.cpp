#include "Harl.hpp"

// Default constructor
Harl::Harl()
{
}

// Destructor
Harl::~Harl()
{}

void	Harl::complain(std::string level)
{
	std::string levels[] = 
	{
		"debug",
		"info",
		"warning",
		"error"
	};
	HarlMemFn chooseFunc[] =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			(this->*chooseFunc[i])();
}

void	Harl::debug()
{
	std::cout
		<< SPRINGGREEN1
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< RESET
		<< std::endl;
}

void	Harl::info()
{
	std::cout
		<< SPRINGGREEN5
		<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< RESET
		<< std::endl;
}

void	Harl::warning()
{
	std::cout
		<< SPRINGGREEN3
		<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
		<< RESET
		<< std::endl;
}

void	Harl::error()
{
	std::cout
		<< SPRINGGREEN6
		<< "This is unacceptable! I want to speak to the manager now."
		<< RESET
		<< std::endl;
}