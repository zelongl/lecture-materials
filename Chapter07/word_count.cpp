#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int getWordCount(string str);

int main()
{
    string myString;

    cout << "Enter a sentence: ";
    getline(cin, myString);

    // "The red fox jumped over the yellow dog"
    int totalWords = getWordCount(myString);
    cout << "\nNumber of words: " << totalWords << endl;

    return 0;
}

int getWordCount(string str)
{
    // Implement using string stream
    istringstream in_stream(str); // "     "
    string word;
    int count{0};

    while (in_stream >> word)
    {
        count++;
    }

    return count;
}