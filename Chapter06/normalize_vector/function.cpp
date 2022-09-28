//
// Created by Erik Gabrielsen on 9/14/22.
//

#include "functions.h"

// int *
void display(int arr[], const int &size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void display(vector<string> &myVector)
{
    // traditional for loop
    for (int i = 0; i < myVector.size(); i++)
    {
        //        cout << i << ": " << myVector[i] << endl; // BAD - DO NOT USE
        cout << i << ": " << myVector.at(i) << endl; // bounds checking - throw exception
    }
}

int findMin(const vector<int> &numbers)
{
    int min = numbers.at(0);
    for (auto item : numbers)
    {
        if (min > item)
        {
            min = item;
        }
    }

    return min;
}

void normalize(vector<int> &numbers)
{
    int min = findMin(numbers);

    for (auto &item : numbers)
    {
        item -= min;
    }
}
