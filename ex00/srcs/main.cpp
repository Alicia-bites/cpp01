#include "Zombie.hpp"

int	main()
{
	Zombie *Zomb;
	Zomb = newZombie("Salim");
	randomChump("Salim");

	delete Zomb;
	return (0);
}