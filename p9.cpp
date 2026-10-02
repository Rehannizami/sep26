# include <iostream>
# include <string>

int pattern1 () { 
    /*
     *    *
     *    * *
     *    * * *
     *    * * * *
     */
    for (int i =0; i < 4 ; i++) {
        for(int j = 0 ; j <= i ; j++){
            std:: cout << "*" << " ";
    } 
        std:: cout << std:: endl;
    }
    return 0;
}

int pattern2 () {
    int n = 5 ;
    // For line changing
    for (int i = 1 ; i <= n ; i++) {
        // For space printing
        for (int j =1; j <= n-i; j++)
        {
            std::cout << " ";
        }
        // For pattern printing
        for(int k =1; k<=i; k++) { 
            std:: cout << "*";
    }
        std::cout << std::endl;
    }
    return 0;
}

int string1() {
    int length;  // Initialized the length
    std:: cout<< "How many letters?: " << std:: endl; // Asked user to input
    std:: cin >> length; // Stored user input into a variable(length)
    char name[length]; // made length variable the length of name array
    for (int i =0 ; i <= length-1 ; i++) {
        std::cin >> name[i];
    }
    for (int i =0; i< length ; i++) {
        std:: cout << name[i];
    }
    return 0;
}
int main() { 
    string1();
    return 0;
}
