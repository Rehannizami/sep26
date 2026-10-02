# include <iostream>
# include <string>
# include <utility>
// Q: Reversing a input string

// Declaring variables within struct
struct {
    int length;
    std::string pl_original;
    std::string pl_modified;
}array;

class input {
    public:
    input() { 
        std:: cout << "Length" << " "; // Asking user for size of array
        std:: cin >> array.length; // Storing the size in length variable
        std:: cout << "Array: " << std:: endl;
        array.pl_original.resize(array.length);
        for (int i = 0 ; i < array.length ; i++) {
            std:: cin >> array.pl_original[i]; }
        array.pl_modified = array.pl_original; 
}
};
class reverse: public input  { 
    public:
        reverse(){
        int start = 0;              // Assinging a forward moving entity within array
        int end = array.length -1;  // Assinging a backward moving entity within array
        while (start < end) {       // Swapping using loop
            std::swap(array.pl_modified[start],array.pl_modified[end]);
            start++;
            end--;  }
        std:: cout << "Reversed: ";
        for (int i =0 ; i< array.length ; i++) {
            std:: cout << array.pl_modified[i] << " " ; }
        std:: cout << std:: endl;
    }
};

class check : public reverse {
    public:
        bool checkpl () {
            if(array.pl_original == array.pl_modified) {
                return true;
            }
            return false;
        }
};

int main() {
    check chk;
    if (chk.checkpl()) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }
    return 0;
}

