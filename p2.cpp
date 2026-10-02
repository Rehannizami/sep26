#include <iostream>
#include <vector>

void arraySum() {
    int length{};
    std::cout << "length: " << std::endl;
    std::cin >> length;
    
    // Using std::vector for safe dynamic sizing
    std::vector<int> arr(length);
    for(int i = 0; i < length; ++i) {
        std::cin >> arr[i];
    }
    int result{};
    // Using arr.size() instead of sizeof(arr)
    for(int i = 0; i < arr.size(); ++i) {
        result += arr[i];
    }
	std::cout << result;
}

int main() {
    arraySum();
    return 0;
}
