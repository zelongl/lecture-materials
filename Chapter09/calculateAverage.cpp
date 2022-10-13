#include <iostream>
#include <vector>

double calculateAverage(vector<int> &numbers);

int main()
{

    return 0;
}

double calculateAverage(vector<int> &numbers)
{
    int sum{0};

    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers.at(i);
    }

    return static_cast<double>(sum) / numbers.size();
}