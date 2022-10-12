#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void countDown(int N);

void countDollars(int daysLeft, long long dollars);

int main()
{
    countDollars(60, 1);

    return 0;
}

void countDown(int N)
{
    if (N == 0)
    {
        cout << "GO!" << endl;
    }
    else
    {
        cout << N << endl;
        N--;
        countDown(N);
    }
}

void countDollars(int daysLeft, long long dollars)
{
    if (daysLeft == 0)
    {
        cout << "Dollars: " << dollars << endl;
    }
    else
    {
        countDollars(--daysLeft, dollars * 2);
    }
}