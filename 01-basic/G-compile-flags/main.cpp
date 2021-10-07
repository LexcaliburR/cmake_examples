#include <iostream>


int main(int argc, char* argv[])
{
    std::cout << "Hello World Cmake Flag" << std::endl;

#ifdef EX2
    std::cout << "define flags EX2 succeed! " << std::endl;
#endif

#ifdef EX3
    std::cout << "define flags EX3 succeed! " << std::endl;
#endif

    return 0;
}