#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template <typename T>
void	iter(T *array, unsigned int size, void (*fun)(T const &)) {
	for (unsigned int i = 0; i != size; i++) {
		fun(array[i]);
	}
}
#endif
