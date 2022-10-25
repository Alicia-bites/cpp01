#include "Harl.hpp"

// Default constructor
Harl::Harl()
{}

// Constructor
Harl::Harl(std::string filter)
: filter_ (filter)
, filterLevel_ (-1)
{}

// Destructor
Harl::~Harl()
{}

std::string Harl::levels_[] =
{
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
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
				complain("DEBUG");
				break;
			case 1:
				complain("INFO");
				break;
			case 2:
				complain("WARNING");
				break;
			case 3:
				complain("ERROR");
				break;
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
		<< "[ DEBUG ]"
		<< std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< RESET
		<< std::endl
		<< std::endl;
}

void	Harl::info()
{
	std::cout
		<< SPRINGGREEN5
		<< "[ INFO ]"
		<< std::endl
		<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< RESET
		<< std::endl
		<< std::endl;
}

void	Harl::warning()
{
	std::cout
		<< SPRINGGREEN3
		<< "[ WARNING ]"
		<< std::endl
		<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
		<< RESET
		<< std::endl
		<< std::endl;
}

void	Harl::error()
{
	std::cout
		<< SPRINGGREEN6
		<< "[ ERROR ]"
		<< std::endl
		<< "This is unacceptable! I want to speak to the manager now."
		<< RESET
		<< std::endl
		<< std::endl;
}

