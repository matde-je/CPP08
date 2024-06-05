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

    // std::cout << "it: " << *it << std::endl;
    // std::cout << "ite: " << *ite << std::endl;
     ++it;
    // std::cout << "++it " << *it << std::endl;
     --it;
    // std::cout << "--it " << *it << std::endl;

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

}