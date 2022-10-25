#include "Zombie.hpp"
// default constructor
Zombie::Zombie()
:name("noName")
{
	std::cout << YELLOW3 << "A new Zombie is born." << RESET << std::endl;
}

// destructor
Zombie::	~Zombie()
{
	std::cout << YELLOW1 << name
		<< " is dead for good now." << RESET << std::endl;
}

void 		Zombie::announce() const
{
	std::cout << YELLOW2 << name << ": "
		<< "BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void		Zombie::setName(std::string name_arg)
{
	name = name_arg;
}

void	display_error_message()
{
	std::cout
	<< INDIANRED3
	<< "Do you wish for the end of the world?"
	<< std::endl
	<< INDIANRED2 << "This n is out of boundaries, even for me."
	<< std::endl
	<< INDIANRED4
	<< "Come back when you become reasonnable."
	<< RESET
	<< std::endl;
}

void	display_message_if_zero_zombie()
{
	std::cout 
	<< TURQUOISE4 
	<< "No zombies created today. The world remains peaceful."
	<< RESET << std::endl;
}

void	display_number_of_zombies(int n)
{
	std::cout
	<< YELLOW6
	<< "Creating "
	<< n
	<< " Zombies..."
	<< RESET
	<< std::endl;
}