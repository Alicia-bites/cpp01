#include "HumanB.hpp"

//default constructor
HumanB::HumanB()
: weapon_(NULL)
, name_ ("none")
{
}

HumanB::HumanB(const std::string& name)
: weapon_(NULL)
, name_(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (weapon_ != NULL)
		std::cout << name_ << " attacks with their "
				<< weapon_->getType()  << std::endl;
	else
		std::cout << name_ << " attacks without a weapon!"
			<< std::endl;
}


void	HumanB::setWeapon(Weapon& newWeapon)
{
	if (newWeapon.getType() == "")
	{
		std::cout 
			<< "No type chosen. Your squire will choose for you."
			<< std::endl;
			*weapon_ = Weapon("little spoon");
	}
	weapon_ = &newWeapon;
}