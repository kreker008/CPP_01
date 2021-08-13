#ifndef KAREN_HPP
#define KAREN_HPP

#include "string"
#include "iostream"

class Karen
{
public:
	Karen();
	void	complain(std::string level);

private:
	static void debug(void);
	static void info(void);
	static void warning(void);
	static void error(void);

	void		(*ptr[4])(void);
	std::string	level_string[4];
};

#endif
