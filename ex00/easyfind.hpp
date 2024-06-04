#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>

template <typename T>

typename T::iterator easyfind(T &container, int i)
{
    typename T::iterator iter = std::find(container.begin(), container.end(), i);
    if (iter == container.end())
        throw std::out_of_range("Value not found in container");
    return iter;
}


#endif
