#include <iostream>
#include <cstring>

using namespace std;

/**
 * @brief Implement your own version of strlen
 *
 * @return int
 */

void printSize(int array[])
{
    cout << sizeof(array);
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << sizeof(array) << endl;
    printSize(array);
    return 0;
}