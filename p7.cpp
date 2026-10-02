#include <iostream>
#include <string>
// Polymorphism
class Animal1 {
    public:
        // Function to display animal sound
        void sound(){
            std::cout << "Animal makes a sound" << std::endl;
        }
};
class Dog1 : public Animal1 {
    public:
        // Overidding the sound function
        void sound(){
            std::cout << "Dog Barks!" << std::endl;
        }
};
int animal1(){
    Dog1 d1;
    d1.sound();
    return 0;
}   // Output: Dog Barks

// Function Overloading
class Mixy{
    public:
        // Function to add two integers:
        void add(int a, int b){
            std::cout << "Integer Sum = " << a+b 
                << std::endl;
        };
        // Function to add two floating point values
        void add(double a, double b){
            std::cout << "Float Sum = " << a+b
                << std::endl;
        }
        // Function to add two strings
        void add(const std::string a, const std::string b){
            std::cout<< "String Sum = " << a+b
                << std::endl;
        }
};
int mixy(){
    Mixy mix;
    mix.add(10,2);
    mix.add(6.7,6.9);
    mix.add("Rehan ","Nizami");
    return 0;
}

// Operator Overloading
class Complex {
    public:
        int real{}, imag{};
        Complex(int r, int i) :
            real(r), imag(i) {}

        // Overloading the '+' operator
        Complex operator+(const Complex& obj) {
            return Complex(real + obj.real, imag + obj.imag);
        }
};
int complex(){
    Complex c1(10,5), c2(2,4);
    // Adding c1 and c2 using + operator
    Complex c3 = c1+c2;
    std::cout << c3.real << " +i" << c3.imag;
    return 0;
}

// Function overidding
class Base {
    public:
        // Virtual Function
        virtual void display() {
            std::cout << "Base class function";
        }
};
class Derived : public Base {
    public:
        // Overriding the base class function
        void display() override {
            std::cout << "Derived class function";
        }
};

int override() {
    // Creating a pointer of type Base
    Base* basePtr;
    // Creating an object of Derived class
    Derived derivedObj;
    // Pointing base class pointer to
    // derived class object
    basePtr = &derivedObj;
    // Calling the display function
    // using base class pointer
    basePtr -> display();
    return 0;
}
// CPP Templete




