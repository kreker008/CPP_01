#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "string"
#include "iostream"

class Weapon
{
public:
	Weapon();
	Weapon(std::string weapon_type);
	void				setType(std::string type);
	const std::string&	getType();
private:
	std::string type;
};

#endif
