#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *zomb = new Zombie[N];

	for(int i = 0; i < N; ++i)
		zomb[i].set_name(name);
	return (zomb);
}
int main()
{
	Zombie *zomb;

	zomb = zombieHorde(5, "Garry");
	zomb[0].announce();
	zomb[1].announce();
	zomb[2].announce();
	zomb[3].announce();
	zomb[4].announce();
	zomb[4].set_name("ALLA");
	zomb[4].announce();
	delete [] zomb;
}
