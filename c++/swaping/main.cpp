#include <iostream>

int main() {

    int a = 5, b = 10;


    std::cout << " a = " << a << ", b = " << b << std::endl;


    int swap = a;
    a = b;
    b = swap;


    std::cout << " a = " << a << ", b = " << b << std::endl;

    return 0;
}
