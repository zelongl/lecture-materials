#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const char originalStr[15]{"String to copy"};
    char newStr[20]{};

    cout << "Original String: " << originalStr << endl;
    cout << "New String: " << newStr << endl;
    cout << endl;

    // strlen()
    int originalLength = strlen(originalStr);
    int newLength = strlen(newStr);

    cout << "Original String (size): " << originalLength << endl;
    cout << "New String (size): " << newLength << endl;
    cout << endl;

    // strcmp
    if (strcmp(originalStr, newStr) == 0)
    {
        cout << "Strings are equal!" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }
    cout << endl;

    // strcpy
    strcpy(newStr, originalStr);
    cout << "Original String: " << originalStr << endl;
    cout << "New String: " << newStr << endl;
    cout << endl;

    // strcmp
    if (strcmp(originalStr, newStr) == 0)
    {
        cout << "Strings are equal!" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }
    cout << endl;

    return 0;
}