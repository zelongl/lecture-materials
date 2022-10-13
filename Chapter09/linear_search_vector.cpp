#include <iostream>

using namespace std;

int linear_search(vector<int> &nums, int key);

int main()
{
    vector<int> numbers;

    for (int i = 100000; i >= 1; i -= 3)
    {
        numbers.push_back(i);
    }
}

int linear_search(vector<int> &nums, int key)
{
    for (int i = 0; i < nums.size(); i++) // 33,000 || 1
    {
        if (key == nums.at(i))
        {
            return i;
        }
    }

    return -1;
}