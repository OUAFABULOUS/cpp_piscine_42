#include "Harl.hpp"

const char *Harl::_level[NUMBER] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl() {
	_tab[0] = &Harl::_debug;
	_tab[1] = &Harl::_info;
	_tab[2] = &Harl::_warning;
	_tab[3] = &Harl::_error;
}

Harl::~Harl() {}

void Harl::_debug(void) const
{
	std::cout << YELLOW << DEBUG_MSG << RESET << std::endl;
}

void Harl::_info(void) const
{
	std::cout << MAGENTA << INFO_MSG << RESET << std::endl;
}

void Harl::_warning(void) const
{
	std::cout << BLUE << WARNING_MSG << RESET << std::endl;
}

void Harl::_error(void) const
{
	std::cout << RED << ERROR_MSG << RESET << std::endl;
}

void Harl::complain(std::string level) const
{
	int i;
	i = 0;

	while (i < NUMBER)
	{
		if (!level.compare(_level[i])) {
			Func func = _tab[i];
			(this->*func)();
			return ;
		}
		i++;
	}
	std::cout << GREEN << OTHER_MSG << RESET << std::endl;
}
