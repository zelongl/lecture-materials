#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string test = "1,3,5,7,9";

    stringstream s1(test); // "1,3,5,7,9"

    // parse items from string
    string temp;
    getline(s1, temp, ',');
    cout << temp << endl; // 1

    getline(s1, temp, ',');
    cout << temp << endl;

    getline(s1, temp, ',');
    cout << temp << endl;

    getline(s1, temp, ',');
    cout << temp << endl;

    getline(s1, temp);
    cout << temp << endl;

    char word[6] = "Hello";

    // "Hello\0    "

    return 0;
}