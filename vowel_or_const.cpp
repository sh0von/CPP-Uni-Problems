#include <iostream>
using namespace std;

bool is_vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    c = tolower(c);
    if (is_vowel(c))
    {
        cout << c << " is a vowel" << endl;
    }
    else
    {
        cout << c << " is a consonant" << endl;
    }
}