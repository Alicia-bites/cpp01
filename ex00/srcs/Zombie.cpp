#include "Zombie.hpp"

// constructor
Zombie::Zombie(std::string name)
: name(name)
{
	Zombie::announce();
}

// destructor
Zombie::~Zombie()
{
	std::cout << STEELBLUE4 << name
		<< " is dead for good now." << RESET << std::endl;
}

void Zombie::announce()
{
	std::cout << PALEVIOLETRED1 << name << ": "
		<< "BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
