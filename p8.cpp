# include <iostream>
using namespace std;
// Function Template syntax:
template <typename T> T myMax(T x, T y){
    return (x>y) ? x : y;
}
void temp(){
    std::cout << "Max of 3 and 7 is: " << myMax<int>(3,7) << std::endl;
    std::cout << "Max of 3.5 and 7.5 is: " << myMax<double>(3.5,7.5) << std::endl;
    std::cout << "Max of 'g' and 'e' is: " << myMax<char>('g','e') << std::endl;
}

// Class Templete syntax:
template <typenameT>
class tempy {
    public:
        T x;
        T y;
        tempy(T val1, T val2) : x(val1), y(val2) {}
        void getValues() {
            std::cout << x << " " << y;
        }
};
void Tempy(){
    tempy<int> tempyINT(10,20);
    tempy<double> tempyDOB(3.14,6.28);

    tempyINT.getValues();
}

// Multiple Template Parameters
template <typename T1, typename T2, typename T3> class tempy1{
    public:
        T1 x;
        T2 y;
        T3 z;
        tempy1(T1 val1, T2 val2, T3 val3) : x(val1), y(val2), z(val3){
        }
        void getValues(){
            std::cout << x << " " << z;
        }
};
void Tempy1(){
    tempy1<int,double, string> IDStempy1(3,3.14,"Pie");
    tempy1<char, float, bool> CFBtempy1('A',5,76f,true);
    IDStempy1.getValues();
    CFBtempy1.getValues();
}

// Variable Template
template <typename T> constexpr T pi = T(3.14159);
void Tempy2(){
    std::cout << "Pi as float: " << pi<float> <<std::endl;
    std::cout << "Pi as double: "<< pi<double> <<std::endl;
}

// Default Templete Arguements
template <typename T1, typename T2= double, typename T3 = string> class tempy2 {
    public:
        T1 x;
        T2 y;
        T3 z;
        tempy2(T1 val1, T2 val2, T3 val3) : x(val1),y(val2),z(val3){
        }
        void getValues() {
            std::cout << " " << y << " " << z;
        }
};
void Tempy2(){
    tempy2<int, float, string> IFStempy2(10,5.67f,"tempy2");
    tempy2<char> CDStempy2('A',3.14,"tempy2");
    IFStempty2.getValues();
    std::cout << std::endl;
    CDStempy2.getValues();
}

// Template Metaprogramming:
template <int N> struct Factorial{
    static const int value = N * Factorial<N - 1>::value;
};
template <> struct Factorial<0> {
    static const int values = N * Factorial<N - 1>::values;
};
int fact(){
    std::cout << "Factorial of 5 is: " << Factorial<5>::value;
    return 0;
}
// Basic syntax of struct
struct {
    int myNum;
    string myString;
} myStructure;

// Assign values to memebers of myStructure
myStructure.myNum = 1;
myStructure.myString = "Struct";
// Printing
std::cout<< myStructure.myNum << std::endl;
std::cout<< myStrucutre.myString << std::endl;

// Structures
struct {
    std::string b&m;
    int year{};
    } mC1, mC2;
mC1.b = "mC1.b"; mC2.b = "mC2.b";
mC1.m = "mC2.m"; mC2.m = "mC2.m";
mC1.y = "mC1.y"; mC2.y = "mC2.y";

struct{
    int var = 10;
    int* ptr = &var;
} pointer;
void struct1 () {
    std:: cout << "var: " << pointer.var
        << std:: endl;
    std:: cout << "add / var: " << pointer.&var
        << std:: endl;
    std:: cout << "ptr: " << pointer.ptr 
        << std:: endl;
    std:: cout << "*ptr: " << pointer.*ptr;
}
void struct2 () {
    int var;
    int* ptr = &var;
    // Access value using (*)
    // operator
    std:: cout << *ptr;
    return 0; }

void struct3 () {
    int *ptr;
    return 0; }

// Double Pointer
void dpointer {
    int var = 10;
    int* ptr1 = &var;
    int** ptr2 = &ptr1;
}


