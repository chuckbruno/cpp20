#include <iostream>

int main()
{
    auto result = [](double a, double b){return a + b;}(12.5, 89.34);
    auto func = [](double a, double b)->int{return a + b;};
    int a = 12;
    int b{23};

    auto func2 = [&a, &b](){std::cout << (a + b) << std::endl; a = 30;};
    auto func3 = [=](){std::cout << a + b << std::endl;};
    auto func4 = [&](){std::cout << a + b << std::endl;};
    std::cout << result << std::endl;
    std::cout << func(12.4, 15.90) << std::endl;
    func2();
    std::cout << a << std::endl;
    func3();
    func4();
    a = 100;
    func3();
    func4();
    return 0;
}
