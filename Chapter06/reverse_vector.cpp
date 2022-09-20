#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &numbers);

int main()
{
    vector<int> numbers{0, 1, 2, 3, 4, 5};

    reverse(numbers);

    for (auto num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

void reverse(vector<int> &numbers)
{
    for (int i = 0; i < numbers.size() / 2; i++)
    {
        // x = numbers.at(i)
        // y = numbers.at(numbers.size() - 1 - i)

        int temp = numbers.at(i);
        numbers.at(i) = numbers.at(numbers.size() - 1 - i);
        numbers.at(numbers.size() - 1 - i) = temp;
    }
}