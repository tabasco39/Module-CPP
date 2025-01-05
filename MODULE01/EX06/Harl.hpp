#ifndef HARL_HPP
#define HARL_HPP

#include "iostream"
#include "string"

class Harl
{

	public:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void complain(std::string level);
};
typedef struct s_level
{
	std::string level;
	void (Harl::*function)(void);
}   t_level;


#endif