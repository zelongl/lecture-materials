#include <iostream>

using namespace std;

int main()
{
    int highway_number;

    cout << "Enter a Highway Number: ";
    cin >> highway_number;

    // Not valid highway - anything ending in 00
    // primary highways - 1 - 99
    // odd numbers go N / S, even numbers go E / W
    // auxilary highways: 100 - 999
    // servers a primary highway (hint: use % to pull the last 2 digits from number)

    if (highway_number % 100 == 0 || highway_number < 1 || highway_number > 999)
    {
        cout << "Error, invalid highway number..." << endl;
    }
    else
    {
        if (highway_number < 100)
        {
            // primary highway
            cout << "I-" << highway_number << " is primary, ";
            if (highway_number % 2 == 0)
            {
                cout << "going east/west." << endl;
            }
            else
            {
                cout << "going north/south." << endl;
            }
        }
        else
        {
            // auxilary
            cout << "I-" << highway_number << " is auxilary, ";

            int primary_highway_number = highway_number % 100;
            cout << "serving I-" << primary_highway_number << ", ";

            if (highway_number % 2 == 0)
            {
                cout << "going east/west." << endl;
            }
            else
            {
                cout << "going north/south." << endl;
            }
        }
    }
}