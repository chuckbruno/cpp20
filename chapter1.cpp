#include <iostream>
#include <string>

int main()
{
    // auto result = (10 <=> 20) > 0;
    // std::cout << result << std::endl;

    int age{234};
    std::string name;

    std::getline(std::cin, name);
    // std::cin >> name;
    std::cin >> age;

    std::cout << name << age << std::endl;

    std::clog << "Log message, " << std::endl;

    return 0;
}