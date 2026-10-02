#include <iostream>
#include <string>

int main() { 
    int arr[10];
    for(int i =0; i<10; i++) { 
        std:: cin >> arr[i];
    }
    int sum{0};
    for (int i =0; i <10; i++) {
        sum+=arr[i];
        std::cout << arr[i] << " ";
    }
    std:: cout << std::endl;
    std:: cout << sum << std::endl;
    std:: cout << "Thank you!" << std::endl;
    return 0;
}
