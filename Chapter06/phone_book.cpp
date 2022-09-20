#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> names = {"Bob", "Erik", "John", "Sarah"};
    vector<string> phone_numbers = {"123-456-7890", "432-234-2342", "851-480-4875", "877-957-4857"};

    /**
     * @brief
     * Find someones phone number
     */
    string name;
    getline(cin, name);

    // find by name;
    int index{0};

    for (int i = 0; i < names.size(); i++)
    {
        if (names.at(i) == name)
        {
            index = i;
        }
    }

    string phone_number = phone_numbers.at(index);
    cout << name << ": " << phone_number << endl;

    return 0;
}