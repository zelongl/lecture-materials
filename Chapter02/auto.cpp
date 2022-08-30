#include <iostream>
#include <vector>
#include <string>

int main()
{
  // auto - directs the compiler to use the initialization expression to deduce its type...
  auto x;                 // does not compile
  auto y = 100;           // does compile
  auto z = "hello world"; // what is this type?

  std::vector<std::vector<std::string>> table;

  for (std::vector<std::string> item : table)
  {
    // loop through table
  }

  // Simplify the loop using auto.
  for (auto item : table)
  {
    // loop through table
  }

  std::string name = "test";

  // can use char or auto!
  for (char letter : name)
  {
    // loop through string - print each letter
    std::cout << letter;
  }

  return 0;
}