#include <iostream>

using namespace std;

enum OPERATION
{
    ADDITION = 1,
    SUBTRACTION,
    MULTIPLICATION
} // 0

int
main()
{
    int operation_selection;
    double first_entry, second_entry;

    cout << "Please enter 2 numbers: ";
    cin >> first_entry >> second_entry;

    cout << "Enter a selection: ";
    cout << "\n  1 for addition";
    cout << "\n  2 for subtraction";
    cout << "\n  3 for multiplication";

    cin >> operation_selection;

    // Add a switch statement to perform calculation (use enumerators)

    switch (operation_selection)
    {
    case OPERATION.ADDITION:
        cout << first_entry << " + " << second_entry << " = " << first_entry + second_entry << endl;
        break;
    case OPERATION.SUBTRACTION:
        cout << first_entry << " - " << second_entry << " = " << first_entry - second_entry << endl;
        break;
    case OPERATION.MULTIPLICATION:
        cout << first_entry << " * " << second_entry << " = " << first_entry * second_entry << endl;
        break;
    default:
        cout << "Invalid entry, please enter a value from 1 - 3";
        break;
    }
}