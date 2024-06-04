#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <cstdlib>
#include <iterator>


class Span
{
    public:
        Span(unsigned int n);
        ~Span();
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void loop(std::vector<int> &it);

        Span &operator=(const Span &src);
        Span(const Span &src);

    private:
        unsigned int max;
        std::vector<int> vec;

};

#endif