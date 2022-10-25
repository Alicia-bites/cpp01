#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <cstddef>


class HumanB
{
private:
	Weapon *weapon_;
	std::string name_;
public:
	HumanB();
	HumanB(const std::string& name);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon& weapon);

};

#endif