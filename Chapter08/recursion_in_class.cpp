#include <iostream>

using namespace std;

int factorial(int n);

int gcd(int a, int b);
int gcd_modulo(int a, int b);
int fibonacci(int n);

int main()
{
    //    cout << factorial(1) << endl;
    //    cout << factorial(3);
    //    cout << factorial(5) << endl;
    //    cout << factorial(7) << endl;

    //    cout << gcd_modulo(12, 8) << endl;

    cout << fibonacci(100) << endl;

    return 0;
}

int factorial(int n)
{
    // base case
    if (n == 1)
        return 1;
    else
    {
        return n * factorial(n - 1);
    }
}

int gcd(int a, int b)
{
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    else
        return gcd(b - a, a);
}

int gcd_modulo(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int fibonacci(int n)
{
    // base case
    if (n <= 2)
        return 1;
    else
    {
        return (n - 1) + fibonacci(n - 2);
    }
}