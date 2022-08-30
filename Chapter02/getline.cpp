#include <iostream>
#include <string>

using namespace std;

int main()
{
  string fullName;
  int age;
  cout << "Enter your age: ";
  cin >> age;

  cin.ignore();
  cin.clear();

  cout << "Please Enter Full Name: " << endl;
  getline(cin, fullName); // \n

  cout << fullName << endl;

  return 0;
}