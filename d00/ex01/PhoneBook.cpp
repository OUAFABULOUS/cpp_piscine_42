#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->_i = 0;
	return ;
}

PhoneBook::~PhoneBook() {
	return ;
}

void	PhoneBook::fill_contact(std::string inputs[5]) {

	int	j;

	if (this->_i <= 7)
		j = this->_i;
	else
		j = this->_i % 8;
	this->_contacts[j].setFirstName(inputs[0]);
	this->_contacts[j].setLastName(inputs[1]);
	this->_contacts[j].setNickName(inputs[2]);
	this->_contacts[j].setPhoneNumber(inputs[3]);
	this->_contacts[j].setDarkestSecret(inputs[4]);
	if (this->_i < 8)
		this->_i++;
}

void	print_10(std::string str, int i) {
	if (str.length() <= 10) {
		std::cout << std::setw(10) << str;
	}
	else {
		std::cout << str.substr(0,9) << ".";
	}
	if (i == 1) {
		std::cout << "|";
	}
	else {
		std::cout << std::endl;
	}
}

void	PhoneBook::print_contacts(void) {
	int	j;

	j = 0;
	while (j < this->_i)
	{
		print_contact(j,1);
		j++;
	}
}

void	PhoneBook::print_contact(int id, int type) {

	if (type == 1 || (type == 2 && id < this->_i))
	{
		std::string	FN = this->_contacts[id].getFirstName();
		std::string	LN = this->_contacts[id].getLastName();
		std::string N = this->_contacts[id].getNickName();
		std::string PN = this->_contacts[id].getNickName();
		std::string	DS = this->_contacts[id].getDarkestSecret();

		print_10(FN, 1);
		print_10(LN, 1);
		print_10(N, 1);
		print_10(PN, 1);
		print_10(DS, 0);
	}
	else if (id >= this->_i) {
		std::cout << "Index out of range" << std::endl;
	}
}


