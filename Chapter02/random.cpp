#include <cstdlib> // rand & srand
#include <ctime>   // time
#include <iostream>

using namespace std;

int main()
{
  int x = rand();
  int y = rand();

  cout << "x=" << x << " y=" << y << endl;
  cout << time(NULL) << endl;

  // seed the random number generator
  srand(time(NULL));

  // HINT: Use the % operator to get a random number in specific range?
  int random = (rand() % 10) + 1;

  // How would we get a random number between 1 - 10?

  cout << "Random Number: " << random << endl;

  return 0;
}