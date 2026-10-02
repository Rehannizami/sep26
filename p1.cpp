#include <iostream>
using namespace std;

int calculation(int a, int b) { return a+b; }
int input(){
	string name{};
	cout << "What is your name?" << endl;
	cin >> name;
	cout << "Your name is " + name << endl;
	return 0;
}
int input2(){
	int number1,number2;
	cout << "Give me two numbers" <<endl;
	cin >> number1;
	cin >> number2;
	int result = number1+number2;
	if(result < 50) {
	cout << "Your are failed" <<endl;
}	else { cout << "You are passed" <<endl;}
	return 0;
}

int loop () {
	for(int i =1; i <=10 ; i+=2){cout << "x" << endl;}
	int j =1;
	while(j<=10){
	cout << "x" <<endl;
	j+=2;
}
	int k =1;
	do{
	cout<< "x" <<endl;
	k+=2;
}	while(k<=10);
	return 0;
}

int loop2(){
	for(int i =0; i<50; i++){
	cout << i <<endl;
	if(i ==30){break;}	
}
	return 0;
}
int main(){
	cout << "Hello World" <<endl; 
	loop2();
	return 0;
}




















































