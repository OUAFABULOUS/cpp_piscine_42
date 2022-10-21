#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(void) {}
Zombie::Zombie(std::string name) : _name(name) {}
Zombie::~Zombie(void) {
	std::cout << RED << this->getName() << " is destructed." << RESET << std::endl;
}

std::string	Zombie::getName(void) const {
	return (this->_name);
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

void	Zombie::announce(void) const{
std::cout << GREEN << this->getName() << ": " << "BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
