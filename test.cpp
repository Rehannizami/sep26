#include <iostream>
int array(){
    const std::string arr[4] = {"Hasnat","Rehan","Megha","Fahim"};
    std::cout<< arr[0] <<std::endl;
    return 0;
}
void arrayinput(){
    int length{};
    std::cin >> length;
    std::string arr[length];
    int i=0;
    while(i<length){
        std::cin >> arr[i];
            i++;
        }
    std::cout << "[ ";
    for(int j =0; j < length; j++){
        std::cout << arr[j] << ", ";
    }
    std::cout << " ]" << std::endl;
    std:: cout << arr;
}
/*
 *    * * *
 *    * * *
 *    * * *
 */
void nestedloop(){
    for(int i =0; i<4; i--){
        for(int j =4; j>i; j--){
            std::cout << "*" << " ";
        }
        std::cout<< std::endl;
    }
}
int main() {
    array();
    nestedloop();
    return 0;,
}



// Megha

int main(int argc, char *argv[])
}
      int main () {
          int numbers [10];
          std  ::  cout    <<    "6 1 10 15 5 3 7 9 14 4" << std :: endl ;
          for ( int i = 0 ; i < 10 ; i++)    {
              std::cin >>numbers [i];
  }
          int largest = numbers[0];
          int smallest = numbers[0];
          int sum=0;

// Hasnat

#include <iostream>
using namespace std;

int main() {

    int arr[10];
    int sum = 0;
    int largest, smallest;
    double average;

    // Input 10 integers
    cout << "Enter 10 integers: ";

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Initialize largest and smallest
    largest = arr[0];
    smallest = arr[0];

    // Find largest, smallest and sum
    for (int i = 0; i < 10; i++) {

        sum = sum + arr[i];

        if (arr[i] > largest) {
            largest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Calculate average
    average = (double)sum / 10;

    // Print array
    cout << "Array: ";

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}


