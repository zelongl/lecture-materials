#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>

using namespace std;

string flip();

int main()
{
    int numberOfFlips{10};

    srand(time(NULL)); // Unique seed

    for (int i{0}; i < numberOfFlips; ++i)
    {
        cout << flip() << endl;
    }

    return 0;
}

string flip()
{
    int random = rand() % 2; // 0 or 1
    return random == 0 ? "heads" : "tails";
}