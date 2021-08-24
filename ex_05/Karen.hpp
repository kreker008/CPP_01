#ifndef KAREN_HPP
#define KAREN_HPP

#include "string"
#include "iostream"


class Karen
{
public:
	Karen();
	void complain( std::string level );
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);


	std::string	level_string[4];
	void		(Karen::*ptr[4])(void);
};

#endif
