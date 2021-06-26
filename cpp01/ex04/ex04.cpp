#include <iostream>
#include <string.h>

int main(void)
{
    std::string zomby("HI THIS IS BRAIN");
    std::string *ptr = &zomby;
    std::string &ss = zomby;

    std::cout << *ptr << std::endl;
    std::cout << ss << std::endl;
}