#include <iostream>

int main() 
{
    std::cout << "Hello World!" << std::endl;
    int x = 0;

    do
    {
        std::cout << "\nEnter a number: ";
        std::cin >> x;

        std::cout << "\n"<< x << " * 2 = " << (x * 2) << std::endl;
    } while (x > 0);

    return 0;
}