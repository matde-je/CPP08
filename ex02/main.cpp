#include "MutantStack.hpp"

//FIFO
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop(); //top element (17) is removed from the stack 
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout  << std::endl;

    MutantStack<int> ms;
    ms = mstack;
    MutantStack<int>::iterator its = ms.begin();
    MutantStack<int>::iterator ites = ms.end();
    while (its != ites)
    {
        std::cout << "ms " << *its << std::endl;
        ++its;
    }
    std::cout  << std::endl;

    MutantStack<int> mss(ms);
    MutantStack<int>::iterator itss = mss.begin();
    MutantStack<int>::iterator itess = mss.end();
    while (itss != itess)
    {
        std::cout << "mss " << *itss << std::endl;
        ++itss;
    }

    std::cout  << std::endl;
    
    std::list<int> test2;
	test2.push_back(5);
	test2.push_back(17);
	std::cout << test2.back() << std::endl;
	test2.pop_back();
	std::cout << test2.size() << std::endl;
	test2.push_back(3);
	test2.push_back(5);
	test2.push_back(737);
	test2.push_back(0);
	std::list<int>::iterator it2 = test2.begin();
	std::list<int>::iterator ite2 = test2.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

}