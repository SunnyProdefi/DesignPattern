#include <iostream>
#include "singleton.h"

int main()
{
    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();

    std::cout << "s1 address: " << &s1 << std::endl;
    std::cout << "s2 address: " << &s2 << std::endl;

    s1.setNum(123);
    std::cout << "set s1 num to 123" << std::endl;
    std::cout << "s2 num: " << s2.getNum() << std::endl;

    s2.setNum(456);
    std::cout << "set s2 num to 456" << std::endl;
    std::cout << "s1 num: " << s1.getNum() << std::endl;

    return 0;
}
