# include <iostream>
# include <string>

int create() {
std::string food = "Pizza";
std::string* ptr = &food;
std::cout << food << " " << ptr;
return 0;
}

int dereferencing() {
    std::string food = "Pizza";
    std::string* ptr = &food;
    std:: cout << *ptr << std::endl; //Pizza
    return 0;
}
int main() { 
    dereferencing();
    return 0;
}

