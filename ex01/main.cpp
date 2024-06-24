#include "Span.hpp"

int random_() {
	return (rand());
}

//Test your Span at least with a minimum of 10 000 numbers. M
int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try
    {
	    sp.addNumber(8);
    }
    catch (std::exception &e)
    {
	    std::cerr << e.what() << std::endl;
    }

    srand(time(NULL));
    std::vector<int> ve(10000);
    std::generate(ve.begin(), ve.end(), random_);
  
    Span s = Span(10000);
    s.addNumbers(ve);
    std::cout << s.shortestSpan() << std::endl;
    std::cout << s.longestSpan() << std::endl;
    
}