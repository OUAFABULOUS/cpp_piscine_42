#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base
{

	public:
		virtual ~Base() {};

};

Base   *generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif /* ************************************************************ BASE_H */