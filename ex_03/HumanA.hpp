#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon& weapon_type);
	void attack();
private:
	HumanA();
	Weapon*			weapon;
	std::string		name;
};

#endif
