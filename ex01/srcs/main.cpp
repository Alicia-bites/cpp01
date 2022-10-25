#include "Zombie.hpp"

int main()
{
	Zombie *Zombs;
	Zombs = ZombieHorde(5, "Rory");
	if (Zombs == NULL)
		return (-1);
	delete[] Zombs;
	return (0);
}