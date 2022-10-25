#include "Harl.hpp"

// Default constructor
Harl::Harl()
{}

// Constructor
Harl::Harl(std::string filter)
: filter_ (filter)
{}

// Destructor
Harl::~Harl()
{}

std::string Harl::levels_[] =
{
	"debug",
	"info",
	"warning",
	"error"
};

void	Harl::defineFilterLevel()
{
	for (int i = 0; i < 4; i++)
		if (filter_ == levels_[i])
			filterLevel_ = i;
	if (filterLevel_ < 0 || filterLevel_ > 3)
		handleError(LEVEL_UNKNOWN);
}

void	Harl::filter()
{
	defineFilterLevel();

	for (int i = filterLevel_; i <= 3; i++)
	{
		switch (i)
		{
			case 0:
				complain("debug");
				break;
			case 1:
				complain("info");
				break;
			case 2:
				complain("warning");
				break;
			case 3:
				complain("error");
				break;
			default:
				std::cout << "No level of complaint for this one." << std::endl;
		}
	}
}

void	Harl::complain(std::string level)
{
	HarlMemFn chooseFunc[] =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	for (int i = 0; i < 4; i++)
		if (level == levels_[i])
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

void	Harl::handleError(int errcode)
{
	if (errcode == LEVEL_UNKNOWN)
		std::cout << "Unknown level. Couldn't set filter." << std::endl;
}