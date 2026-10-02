#include <iostream>
#include <string>
class MyClass {			//The class
	public:			//Access specifier
		int myNum;	//Attribute (int variable)
		std::string myString;	//Attribute (string variable)
};
class Book {
	public:
		std::string title;
		std::string author;
		int year;
};	
void book(){
	Book bookobj;
	Book bookobj2;
	bookobj.title = "Matlida";
	bookobj2.title = "The Giving Tree";
	bookobj.author = "Roald Dahl";
	bookobj2.author = "Shel Silverstein";
	bookobj.year = 1998;
	bookobj2.year = 1964;
	std::string a= bookobj.title+","+bookobj.author+","+std::to_string(bookobj.year);
	std::string b= bookobj2.title+","+bookobj2.author+","+std::to_string(bookobj2.year);
	std::cout<< a << std::endl << b;	
};
// Method inside class
class MyClass2 {
	public:
	void myMethod(){
		std::cout<< 3+6;
	}
};
// Method outside class
class MyClass3 {
	public:
	void myMethod();	//Method declaration only
};
void MyClass3::myMethod() { // Method defination outside class
	std::cout << "Access Permitted";
}
// Parameters in Method:
class Car {	// Class declaration
	public:		// Access Specifyer;
	double speed(double maxspeed);
}
int Car::speed(double maxspeed){
	return maxspeed * 0.621371;
}
// Constructor:
class Class3{
	public:
	Class3() {
		std::cout << "Class called: ";
} 
int main() {
	Car car;
	std::cout<< "Speed in Miles: "+std::to_string(car.speed(200));
	Class3 class3;	// This will call the constructor
	std::cout << typeid(class3).name() << std::endl;
	return 0;
}
