#include <vector>
#include <iostream>

int main()
{
    std::vector<bool> v(10, true);
    for (auto&& e : v)
    {
        std::cout << e << std::endl;
        e = false;
    }

    // cycle below does not compile because of std::vector<bool> special optimization
    // https://en.cppreference.com/w/cpp/container/vector_bool
    for (auto& e : v)
    {
        std::cout << e << std::endl;
    }
}