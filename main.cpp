

#include "dayOfyear.h"
#include <iostream>

int main()
{
    using namespace Gimseoyoung2630005;
    dayOfyear d1;
    std::cin >> d1;
    std::cout << d1;

    dayOfyear d2;
    std::cin >> d2;
    std::cout << d2;

    std::cout << ++d2;
    std::cout << d2++;

    if(d1==d2) std::cout << "same\n";
    else std::cout << "different\n";

    std::cout << d1+d2 << std::endl;

    return 0;
}