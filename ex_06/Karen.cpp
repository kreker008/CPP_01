#include "Karen.hpp"

Karen::Karen()
{
	ptr[0] =  Karen::debug;
	ptr[1] =  Karen::info;
	ptr[2] =  Karen::warning;
	ptr[3] =  Karen::error;
	level_string[0] = "DEBUG";
	level_string[1] = "INFO";
	level_string[2] = "WARNING";
	level_string[3] = "ERROR";
}

void	Karen::complain(std::string level)
{
	int i;

	i = 0;
	while(i < 4 && level != level_string[i])
		++i;
	while (i >= 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n"<<
					"There are many ways to filter karen, "
					"but one of the best ones is to SWITCH her off ;)\n";
		return;
	}
	while (i < 4)
	{
		std::cout << "[ " + level_string[i] + " ]\n";
		ptr[i]();
		++i;
	}
}

void	Karen::debug()
{
	std::cout << "I love to get extra bacon for my"
				 "7XL-double-cheese-triple-pickle-special-ketchup "
				 "burger. I just love it!\n";
}

void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void	Karen::info()
{
	std::cout << "I cannot believe adding extrabacon cost more"
				 " money. You don’t put enough! If you did I would"
				 " not have to askfor it!\n";
}

void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been"
				 " coming here for years and you just started working here last month.\n";
}

