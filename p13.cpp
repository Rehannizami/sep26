#include <iostream>
#include <string>

/*
 ============================================================================
  Topic: Templates in C++
 ============================================================================
  What is a Template?
  -------------------
  A template in C++ is a powerful feature for Generic Programming.
  It allows functions and classes to operate with generic types, meaning 
  you can write a single blueprint of code that works with different data types 
  (e.g., int, float, double, char, std::string, user-defined classes) without 
  rewriting or duplicating code for each type.

  How it works:
  - Templates are expanded at compile time (a process called 'Instantiation').
  - The compiler generates the actual concrete code for each data type 
    used in the program.

  Key Concepts Covered in this File:
  1. Function Templates (Single and Multiple type parameters)
  2. Class Templates
  3. Default Template Arguments
  4. Template Specialization (Explicit / Full specialization)
  5. Non-Type Template Parameters (Passing values instead of types)
 ============================================================================
*/

// ============================================================================
// 1. FUNCTION TEMPLATES
// ============================================================================
// Instead of writing multiple overloaded functions for int, double, etc.,
// we define a template function using 'template <typename T>' or 'template <class T>'.

// Example 1.1: Single Template Parameter
template <typename T>
T findMax(T a, T b) {
    // Returns the larger of two values of the generic type T
    return (a > b) ? a : b;
}

// Example 1.2: Multiple Template Parameters
// Used when arguments can be of different data types (e.g., int and string)
template <typename T1, typename T2>
void printPair(T1 first, T2 second) {
    std::cout << "(" << first << ", " << second << ")" << std::endl;
}


// ============================================================================
// 2. CLASS TEMPLATES
// ============================================================================
// Like function templates, class templates allow classes to have members of generic types.
// A common real-world example is STL containers like std::vector<T>.

template <typename T>
class Box {
private:
    T content;

public:
    // Constructor
    Box(T value) : content(value) {}

    // Getter
    T getContent() const {
        return content;
    }

    // Setter
    void setContent(T value) {
        content = value;
    }

    void display() const {
        std::cout << "Box Content: " << content << std::endl;
    }
};


// ============================================================================
// 3. CLASS TEMPLATE WITH DEFAULT ARGUMENTS & MULTIPLE TYPES
// ============================================================================
// We can provide default types (e.g., T2 = std::string) in case the caller doesn't specify.

template <typename T1, typename T2 = std::string>
class KeyValuePair {
private:
    T1 key;
    T2 value;

public:
    KeyValuePair(T1 k, T2 v) : key(k), value(v) {}

    void show() const {
        std::cout << "Key: " << key << " | Value: " << value << std::endl;
    }
};


// ============================================================================
// 4. TEMPLATE SPECIALIZATION
// ============================================================================
// Template specialization allows customized implementation for a specific type.
// General template:
template <typename T>
class Printer {
public:
    void print(T val) {
        std::cout << "General template value: " << val << std::endl;
    }
};

// Full / Explicit Specialization for 'char':
// When Printer<char> is used, this specialized version runs instead.
template <>
class Printer<char> {
public:
    void print(char val) {
        std::cout << "Specialized for char: '" << val << "' (ASCII: " << int(val) << ")" << std::endl;
    }
};


// ============================================================================
// 5. NON-TYPE TEMPLATE PARAMETERS
// ============================================================================
// Templates can also take values (constants known at compile-time), not just types.
// Example: Fixed-size container/array wrapper.

template <typename T, int Size>
class StaticArray {
private:
    T arr[Size];

public:
    int getSize() const {
        return Size;
    }

    // Array subscript operator for read/write access
    T& operator[](int index) {
        return arr[index];
    }

    // Array subscript operator for const objects
    const T& operator[](int index) const {
        return arr[index];
    }
};


// ============================================================================
// MAIN FUNCTION: Demonstrating all template concepts in action
// ============================================================================
int main() {
    std::cout << "=== 1. Function Templates ===" << std::endl;
    // The compiler automatically deduces the type T from arguments
    std::cout << "findMax(10, 20): " << findMax(10, 20) << " (int)" << std::endl;
    std::cout << "findMax(5.5, 2.3): " << findMax(5.5, 2.3) << " (double)" << std::endl;
    std::cout << "findMax('a', 'z'): " << findMax('a', 'z') << " (char)" << std::endl;
    
    // Explicit type specification: findMax<double>(10, 20.5)
    std::cout << "Explicit type findMax<double>(10, 20.5): " << findMax<double>(10, 20.5) << std::endl;

    // Multiple template parameters
    std::cout << "printPair: ";
    printPair(101, "Rehan");
    std::cout << "printPair: ";
    printPair("Pi", 3.14159);

    std::cout << "\n=== 2. Class Templates ===" << std::endl;
    // Creating Box for integer
    Box<int> intBox(100);
    intBox.display();

    // Creating Box for string
    Box<std::string> strBox("Hello Templates!");
    strBox.display();

    std::cout << "\n=== 3. Class Template with Default Arguments ===" << std::endl;
    // Uses default type std::string for T2
    KeyValuePair<int> item1(1, "Apple");
    item1.show();

    // Overriding default type with double
    KeyValuePair<int, double> item2(2, 99.99);
    item2.show();

    std::cout << "\n=== 4. Template Specialization ===" << std::endl;
    Printer<int> intPrinter;
    intPrinter.print(42);

    Printer<char> charPrinter;
    charPrinter.print('A'); // Calls the specialized char version

    std::cout << "\n=== 5. Non-Type Template Parameters ===" << std::endl;
    StaticArray<int, 5> numbers;
    for (int i = 0; i < numbers.getSize(); ++i) {
        numbers[i] = (i + 1) * 10;
    }
    std::cout << "StaticArray elements: ";
    for (int i = 0; i < numbers.getSize(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
