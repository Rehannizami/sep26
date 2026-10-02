#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
// taking the input of 
std::vector<int>arr();
int count{},i{0};
int input(){
	std::cout<< "count " <<std::endl;
	std::cin >> count;
	arr(count);
	do{
		std::cin >> arr[i];
		std::endl;
		i++;
	}while(i<arr.size());
	return 0;
}
void maximum(){
	int max = std::maximum_element(std::begin(arr),std::end(arr));
	std::cout << "["+arr+"]" << std::endl;
}
double average(){
	int add{};
	for(int i =0; i<arr.size(); i++){
	add+=arr[i];
	}
	double avg{add/(arr.size())};
	return avg;
}
int main(){
	maximum();
	std::cout << average() <<std::endl;
}
	

	
