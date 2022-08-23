/**
 * @file comments.cpp
 * @author Erik Gabrielsen
 * @brief This is an example program with good commenting
 * @version 0.1
 * @date 2022-08-22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>

using namespace std;

/**
 * @brief
 * Use block comments before a function to describe what it does
 */
void doSomething()
{
}

/**
 * @brief Main Program
 * starting point
 * @return int
 */
int main()
{
    // use inline comments to describe logic below

    // Print hello world 10 times
    for (int i = 0; i < 10; i++)
    {

        // print hello world to console
        cout << "Hello World" << endl;
    }

    return 1;
}