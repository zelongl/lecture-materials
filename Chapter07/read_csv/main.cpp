#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<vector<string>> characters;
    vector<vector<int>> ages;
    // Reading From File
    // Step 1: Create file object
    ifstream input_file;

    // Step 2: Open the file
    input_file.open("../input.csv"); // Relative in relation to the executable

    // Step 3: Check the state of the file
    if (!input_file.is_open())
    {
        cout << "Invalid file location. Try again" << endl;
        return -1;
    }

    // Step 4: Read from the file
    string line;
    while (getline(input_file, line))
    {
        // line -> Tom,Riddle,50
        string firstName;
        string lastName;
        string ageString;
        int age;

        istringstream lineSS(line); // string -> stream
        getline(lineSS, firstName, ',');
        getline(lineSS, lastName, ',');
        getline(lineSS, ageString);

        age = stoi(ageString);

        // Do whatever
        vector<string> row;
        row.push_back(firstName);
        row.push_back(lastName);

        vector<int> row_ages;
        row_ages.push_back(age);

        characters.push_back(row);
        ages.push_back(row_ages);
    }

    // Step 5: Close the file
    input_file.close();

    return 0;
}
