#include "Zombie.hpp"

Zombie* ZombieHorde(int n, std::string name)
{
	if (n < 0 || n >= INT_MAX)
	{
		display_error_message();
		return NULL;
	}
	if (n == 0)
	{
		display_message_if_zero_zombie();
		return NULL;
	}
	display_number_of_zombies(n);
	Zombie *Zombs = new Zombie[n];
	for(int i = 0; i < n; i++)
	{
		Zombs[i].setName(name);
		Zombs[i].announce();
	}
	return Zombs;
}