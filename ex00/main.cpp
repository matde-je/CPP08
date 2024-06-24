#include "easyfind.hpp"

int main() {
    std::vector<int> vec;

    vec.push_back(123);
    vec.push_back(42);

    try {
        std::vector<int>::iterator iter = easyfind(vec, 42);
        std::cout << *iter << std::endl;
    }
    catch (std::out_of_range& e) {
            std::cerr << e.what() << std::endl;
    }
    try {

        std::vector<int>::iterator iter2 = easyfind(vec, 44);
        std::cout << *iter2 << std::endl;
    }
    catch (std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }
}