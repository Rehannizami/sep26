#include <iostream>
#include <string>
using namespace std;

string str;
string reversedStr;

void reverseString()
{
    reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversedStr += str[i];
    }
}

bool isPalindrome()
{
    return str == reversedStr;
}

int main()
{
    cout << "Enter a string: ";
    cin >> str;

    reverseString();

    cout << "Reversed string: " << reversedStr << endl;

    if (isPalindrome())
    {
        cout << "true - It is a palindrome." << endl;
    }
    else
    {
        cout << "false - It is not a palindrome." << endl;
    }

    return 0;
}

