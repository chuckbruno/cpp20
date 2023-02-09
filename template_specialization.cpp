#include <cstring>
#include <iostream>
#include <string>

template <typename T>
T maxmium(T a, T b);

template<>
const char* maxmium(const char* a, const char* b);

int main()
{
    int a{10};
    int b{23};

    int max_int = maxmium(a, b);

    const char* g{"wild"};
    const char* h{"animal"};
    std::cout << "max(const char*) : " << maxmium(g, h) << std::endl;

    return 0;
}

template <typename T>
T maxmium(T a, T b)
{
    return (a > b) ? a : b;
}


template<>
const char* maxmium(const char* a, const char* b)
{
    return (strcmp(a, b) > 0) ? a : b;
}
