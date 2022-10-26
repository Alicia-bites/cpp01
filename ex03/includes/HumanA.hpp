#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <cstddef>

class HumanA
{
	private:
		Weapon&		weapon_;
		std::string	name_;
		
	public:
		HumanA(const std::string& name, Weapon& weapon);
		~HumanA();

		void	attack() const;
		
};

#endif