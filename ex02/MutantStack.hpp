#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <iterator>
#include <stack>
#include <deque>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
    
        typedef	typename	std::stack<T>::container_type::iterator iterator;
        MutantStack();
	    ~MutantStack();
        MutantStack(const MutantStack& other);
	    MutantStack& operator=(const MutantStack & other);

        iterator begin();
        iterator end();

};

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other) :  std::stack<T>(other) {}


template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack & m) {
    if (this != &m)
		std::stack<T>::operator=(m);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin( void )
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end( void )
{
	return (this->c.end());
}


#endif