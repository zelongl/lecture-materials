#include <iostream>
#include <vector>

using namespace std;

int BinarySearchRecursive(vector<int> numbers, int lower, int upper, int value)
{
    int half;
    if (lower > upper)
    {
        return -1;
    }
    half = (lower + upper) / 2;
    if (numbers.at(half) == value)
    {
        return half;
    }
    else if (numbers.at(half) > value)
    {
        return BinarySearch(numbers, lower, half - 1, value);
    }
    else
    {
        return BinarySearch(numbers, half + 1, upper, value);
    }
}

int BinarySearch(vector<int> numbers, int value)
{
    int lower = 0;
    int upper = numbers.size() - 1;
    int half;
    bool found = false;
    while (lower <= upper && !found)
    {
        half = (lower + upper) / 2;
        if (numbers.at(half) == value)
        {
            found = true;
        }
        else if (numbers.at(half) < value)
        {
            lower = half + 1;
        }
        else
        {
            upper = half - 1;
        }
    }
    if (found)
        return half;
    else
        return -1;
}

int main()
{

    return 0;
}