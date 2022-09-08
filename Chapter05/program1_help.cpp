#include <iostream>
#include <cmath>

void display(int val);

int main()
{
    int arg = 1;
    display(arg); // argument

    int number{0};
    for (int i = 0; i < 4; i++)
    {
        int digit;
        std::cout << "Enter digit #" << i << ": ";
        std::cin >> digit;

        number += digit * std::pow(10, i);
    }

    std::cout << "number: " << number << std::endl;
    return 0;
}

void display(int val)
{ // parameter
    std::cout << "Hello World: " << val;
}