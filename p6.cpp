#include <iostream>
#include <string>
class Phones {
	public:
	std::string brand;
	std::string model;
	int ram;
	
	Phones(std::string x, std::string y, int z);
}
Phones::Phones(std::string x, std::string y, int z){
	brand = x;
	model =y;
	ram =z;
}
void phn {
	Phones budget("Samsung", "Galaxy" , 8);
	Phones flagship("Apple", "Iphone", 4);
	std::cout<< budget.brand << " " << budget.model << std:: endl;
	std:: cout<< flagship.brand << " " << flagship.model << std:: endl;
}

class Car{
	public:
	std::string brand;
	std::string model;
	Car(){
		brand = "Unknown";
		model = "Unknown";
	]
	Car(std::string b, std::string m){
		brand = b;
		model = m;
	}	
};
void automobile{
	Car car1;
	Car car2("BMW","X5");
	Car car3("Ford","Mustang");
	std::cout << "Car1: " << car1.brand << " " << car1.model << std::endl;
	std::cout << "Car2: " << car2.brand << " " << car2.model << std::endl;
}
 
class Employee {
	private:
	int salary;	// Private attribute
	public:
	void setSalary(int s){	//Setter
		salary = s;
	}
	int getSalary(){	//Getter
		return salary;
	}
};

int EmployeeFunction(){
	Employee emp;
	emp.setSalary(46000);
	std::cout<<emp.getSalary();
	return 0;
}

class Employee2 {
	private:
	int salary;
	public:
	Employee(int s){
	salary s;
	}
	// Declaring friend function
	friend void displaySalary(Employee2 emp);
}
void displaySalary(Employee2 emp){
	std::cout<< "Salary: " << emp.salary;
}
int emp2(){
	Employee2 myemp(5000);
	displaySalary(myemp);
	return 0;
}
// Base Class
class Vehicle{
    public:
        Vehicle(){
            std::cout<<"Osaka Car Dealership";
        }
        std::string brand = "Ford";
        void honk(){
            std::cout<< "Tuut, tuut!" << std::endl;
        }
};
// Derived Class
class Car1: public Vehicle {
    public:
        std::string model = "Mustang";
};
int car1(){
    Car1 myCar;
    myCar.honk();
    std::cout<< myCar.brand + " " + myCar.model;
// Multi-level inheritence
// Base Class:
class Family{
    public:
        Family(){
            std::cout<<"The Brison Family" << std::endl;
        }
};
// Derived Class
class MyChild : public Family {
    public:
        std::string childname = "Maxis";
};
// Derived Class
class MyGrandchild : public MyChild {
    public:
        std::string grandchildname = "Theodre, son of "+childname;
};
int family(){
    MyGrandchild family;
    std::cout<< family.grandchildname;
    return 0;
}
// Multiple Inheritence
// Base Class
class father {
    protected:
        father(){
            std::string officialF = "Jero";
            std::cout<< "Paternal Recognition: "+ officialF;
        }
};
// Another Base Class
class mother {
    protected:
        mother(){
            std::string officialM = "Xyaa";
            std::cout<< "Maternal Recognition: "+officialM;
        }
};
// Derived Class
class offspring: public father, public mother{
    public:
        offspring(){
            std::string officialK = "Milo";
            std::string dad{officialF},mom{officialM};
            std::cout<< "Offspring Recognition: "+officialK;
        }
};
int generation1(){
    offspring fam;
    std::cout<< "Guardian: "+fam.officialF;
};















