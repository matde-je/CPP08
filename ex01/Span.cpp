#include "Span.hpp"

Span::Span(unsigned int n) {
    this->max = n;
    vec.clear();
}

Span::Span(const Span &src) {
    *this = src;
}

Span::~Span() {}

Span &Span::operator=(const Span &src) {
    if (this == &src)
		return (*this);
    vec = src.vec;
    max = src.max;
    return *this;
}

void Span::addNumber(int n) {
    if (vec.size() == max)
        throw (std::out_of_range("Container full"));
    vec.push_back(n);
}

// the shortest span or the longest span (or distance, if
// you prefer) between all the numbers stored
int Span::shortestSpan() {
    if (vec.size() < 2)
        throw (std::out_of_range("Container with less than 2 elemnets"));
    std::vector<int> tmp = vec;
    sort(tmp.begin(), tmp.end());
    int res = (tmp[1] - tmp[0]);
	for (std::vector<int>::iterator it = tmp.begin() + 1; it < tmp.end() - 1; it++)
		if (*(it + 1) - *it < res)
			res = *(it + 1) - *it;
	return (res);
}

int Span::longestSpan() {
    if (vec.size() < 2)
        throw (std::out_of_range("Container with less than 2 elements"));
    std::vector<int> tmp = vec;
    sort(tmp.begin(), tmp.end());
    return (*(tmp.end() - 1) - *tmp.begin());
}

 //fill your Span using a range of iterators
void Span::loop(std::vector<int> &num) {
    if (num.size() > max || (vec.size() + num.size()) > max)
        throw (std::out_of_range("Container full"));
    if (vec.empty()) 
        vec.insert(vec.begin(), num.begin(), num.end());
    else
        vec.insert(vec.end(), num.begin(), num.end()); }
 
 
