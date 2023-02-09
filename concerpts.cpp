#include <iostream>
#include <concepts>


// // syntax 1
// template <typename T>
// requires std::integral<T>
// T add(T a, T b)
// {
//     return a + b;
// }

// // syntax 2
// template <std::integral T>
// T add(T a, T b)
// {
//     return a + b;
// }

// // syntax 3
// auto add(std::integral auto a, std::integral auto b)
// {
//     return a + b;
// }

// syntax 4
template <typename T>
T add(T a, T b) requires std::integral<T>
{
    return a + b;
}

int main()
{
    char a{10};
    char b{20};

    auto result_a = add(a, b);
    std::cout << "result : " << static_cast<int>(result_a) << std::endl;

    int c{11};
    int d{5};
    auto result_b = add(c, d);
    std::cout << "result b : " << result_b << std::endl;

    double e{11.1};
    double f{1.9};
    // auto result_c = add(e, f);
    // std::cout << "result c : " << result_c << std::endl;

    return 0;
}
