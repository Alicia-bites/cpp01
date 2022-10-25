#include "HumanA.hpp"

// default constructor
HumanA::HumanA()
: weapon_(NULL)
, name_("none")
{
}

HumanA::HumanA(const std::string& name, Weapon& weapon)
: weapon_(&weapon)
, name_(name)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
	std::cout << name_ << " attacks with their "
				<< weapon_->getType() << std::endl;
}
