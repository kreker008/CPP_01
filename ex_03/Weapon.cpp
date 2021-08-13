#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string weapon_type) : type(weapon_type){}

const std::string&	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}