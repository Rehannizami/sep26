# include <iostream>
// HOMEOWORK:
/*
 * Write a function named reverseArray that takes an array of any data type
 * and its size, and reverses the elements of the array in place(modifying the original
 *  array directly).
 *
 *  Requirement:
 *  1. Use a template defination with a template parameter.
 *  2. The function should reverse the order of elements within the same array.
 *  3. A main function which re-runs the same reverseArray function but once with <int>,
 *     <double>, <string>, <char>
 */
template <typename T> T myMax() { 
    return (x>y) ? x : y;
}
int name = 4;
int main() {
    std:: cout << "Max of 3 and 7 is: " << myMax<int>(3,7)
        << std:: endl;
    std::cout<<"Max of 3.7 and 7.3 is:"<<myMax<double>(3.7,7.3)
        << std:: endl;
    std::cout<<"Max of 'Rehan' and 'Hasnat' is" << myMax<std::string>("Rehan","Hasnat")
        << std::endl;
    func("Rehan","Hasnat");
}
