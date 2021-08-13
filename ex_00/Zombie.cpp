#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{}

Zombie::~Zombie()
{
	std::cout << name + " deaaaad..." << std::endl;
}

void	Zombie::announce()
{
	std::cout << name + " BraiiiiiiinnnzzzZ..." << std::endl;
}

