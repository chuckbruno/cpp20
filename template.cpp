#include <iostream>


// template <typename T>
// T maximum(T a, T b)
// {
// }

template <typename T>
const T maximum(const T& a, const T& b){
    return a > b ? a : b;
}

int main()
{
    int x{5};
    int y{34};
    int result = maximum(x, y);
    std::cout << "result: " << result << std::endl;

    return 0;
}
