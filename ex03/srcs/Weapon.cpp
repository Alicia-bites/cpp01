#include "Weapon.hpp"
//default constructor
Weapon::Weapon()
: type_("none")
{}

// constructor
Weapon::Weapon(std::string type)
: type_(type)
{}

// destructor
Weapon::~Weapon()
{}

const std::string&	Weapon::getType() const
{
	return type_;
}

void	Weapon::setType(const std::string& type_arg)
{
	type_ = type_arg;
}
