#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon)
: weapon_(weapon)
, name_(name)
{}

HumanA::~HumanA()
{}

void HumanA::attack() const
{
	std::cout << name_ << " attacks with their "
				<< weapon_.getType() << std::endl;
}
