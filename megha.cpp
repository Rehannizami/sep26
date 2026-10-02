#include <iostream>
#include <string>

using namespace std;
// GLOBAL VARIABLES
string sunflower;
string reverseWord; 

int main() {
cout << "Enter a string (Example: sunflower): " <<endl;
cin >> sunflower;
// lastIndex is inside so that it can read the data inside sunflower
int lastIndex = sunflower.length() -1;
    // Loop to reverse string
    for (int i = lastIndex; i >= 0; i--){
        reverseWord = reverseWord + sunflower[i];
    }
    // check palindrome
    if (sunflower == reverseWord) {
        cout << "Result: true[PALINDROME]" << endl;
    } 
    else{
        cout << "Result: false[NOT PALINDROME]"  << endl;
    }
    return 0;
}
