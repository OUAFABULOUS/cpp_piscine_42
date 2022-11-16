#include "B.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

B::B() : _name("B")
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

B::~B()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, B const & i )
{
	o << "Type = " << i.getName() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	B::getName() const{
	return (_name);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */