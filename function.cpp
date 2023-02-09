#include <iostream>
#include <string>

std::string cat_str(const std::string& a, const std::string& b)
{
    std::string result = a + b;
    std::cout << "&result: " << &result << std::endl;
    return result;
}


int main()
{
    std::string result = cat_str(std::string("Hello"), std::string("World"));
    std::cout << "&result: " << &result << std::endl;
    return 0;
}
