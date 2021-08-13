#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon_type) : name(name)
{
	weapon = &weapon_type;
}

HumanA::HumanA(){};

void HumanA::attack()
{
	std::cout << name << " attacks with his " + (this->weapon == nullptr ? weapon->getType() + "\n" : "null weapon";
}