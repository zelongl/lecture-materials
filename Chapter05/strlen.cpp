#include <iostream>
#include <cstring>

using namespace std;

/**
 * @brief Implement your own version of strlen
 *
 * @return int
 */
int myStrlen(char word[]);

int main()
{
    char myCString[] = "Hello";

    cout << "strlen(): " << strlen(myCString) << endl;
    cout << "myStrlen(): " << myStrlen(myCString) << endl;

    return 0;
}

int myStrlen(char word[])
{
    int size{0};

    while (word[size] != '\0')
    {
        /** perform whatever task with that character */
        size++;
    }

    return size;
}