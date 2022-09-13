#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int originalVal1 = val1;
    val1 = val2;
    val2 = originalVal1;
    cout << "Inside Swap: ";
    cout << val1 << " - " << val2 << endl;
}

int main()
{
    int val1 = 100;
    int val2 = 200;

    cout << val1 << " - " << val2 << endl;
    swap(val1, val2);
    cout << val1 << " - " << val2 << endl;

    return 0;
}