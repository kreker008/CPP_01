#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name) : name(name){}

Zombie::~Zombie()
{
	std::cout << name + " deaaaad..." << std::endl;
}

void Zombie::announce()
{
	std::cout << name + " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}
