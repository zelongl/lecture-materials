#include <iostream>
#include <vector>
#include <string>
#include <array>

#include "functions.h"

void displayTable(const vector<vector<int>> &table);

using namespace std;

int main()
{
    int array[10];
    int array2[] = {1, 2, 3};

    const int size = 10;
    int array3[size] = {1, 2, 3, 5};

    /**
     * VECTORS
     */
    vector<string> myVector;                // initialize to size 0;
    vector<int> numbers = {10, 2, 4, 6, 8}; // size = 5
    vector<int> numbers_two(10, 10);        // size = 10
    vector<int> large_vector(10000);

    // push_back
    myVector.push_back("1"); // size = 1, capacity = 1
    myVector.push_back("2"); // size = 2, capacity = 2
    myVector.push_back("3"); // size = 3, capacity = 4
    myVector.push_back("4"); // size = 4, capacity = 4
    myVector.push_back("5"); // size = 5, capacity = 8

    for (auto &item : myVector)
    {
        item = "20";
    }

    display(myVector);

    cout << "Min: " << findMin(numbers) << endl;

    cout << "Normalize" << endl;
    normalize(numbers);

    for (auto item : numbers)
    {
        cout << item << " ";
    }
    cout << endl;

    // 2D Vectors
    vector<vector<int>> table;
    vector<vector<int>> table2 = {{1, 2, 3}, {4, 5, 6}};

    vector<int> row1 = table2.at(0); //
    row1.at(0);                      // 1
    displayTable(table2);

    // 2D built-in c-array
    int table_array[2][2];

    table_array[0][0] = 1;
    table_array[0][1] = 2;
    table_array[1][0] = 3;
    table_array[1][1] = 4;

    cout << table_array[0][1];

    return 0;
}

void displayTable(const vector<vector<int>> &table)
{
    //    for (int i = 0; i < table.size(); i++) {
    //        for (int j = 0; j < table.at(i).size(); j++) {
    //            cout << table.at(i).at(j) << " ";
    //        }
    //        cout << endl;
    //    }
    for (auto &row : table)
    {
        for (auto &col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}