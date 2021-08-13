#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	return(new Zombie(name));
}

void randomChump( std::string name )
{
	Zombie* zomb = newZombie(name);
	delete zomb;
}

int main()
{
	Zombie zomb("KARTANA");

	zomb.announce();
	randomChump("IGOR");
	randomChump("KARL");
	randomChump("JACK");
}
