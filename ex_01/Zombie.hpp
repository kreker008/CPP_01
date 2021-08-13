#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "string"
#include "iostream"

class Zombie
{
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie();
	void	announce(void);
	Zombie*	zombieHorde(int N, std::string name);
	void	set_name(std::string name);
private:
	std::string name;
};

#endif
