
# include <iostream>
# include <string>
// Problem-1
template <typename T>
int findIndex(const T arr[],int size,const T&target){
    for(int i =0 ; i <size ; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int prb1() {
    int intArr[] = {10, 20, 30, 40, 50};
    double doubleArr[] = {1.5, 2.5, 3.5};
    std::string strArr[] = {"apple","banana", "cherry"};
    std::cout << "int 30 index: " <<
        findIndex(intArr, 5, 30) << "\n";                   //Output: 2
    std::cout << "int 99 index: " <<
        findIndex(intArr, 5, 99) << "\n";                   // Output: -1
    std::cout << "double 2.5 index: " <<
        findIndex(doubleArr, 3, 2.5) << "\n";               //Output: 1
    std::cout << "string 'banana' index: "<< 
        findIndex(strArr, 3,std::string("banana")) << "\n"; // Output: 1
    return 0;
}

// Problem-2
template <typename T>
class Stack{
    private:
        T* arr;
        int length{},count{};
        int top = -1;
    public:
        Stack(int cap =100): length(cap), count(0){
            arr = new T[length];
        }
        ~Stack() {
            delete[] arr;
        }
        void push(const T& item);
        T pop() {
            if (isEmpty()) {
                std::cout << "Stack Underflow\n";
                return T();
                }
                return arr[top--];
        }
        T peek() const {
            if (isEmpty()) {
                std::cout << "Stack is empty\n";
                return T();
                }
            return arr[top];
            }
        bool isEmpty() const { return (top == -1); }
        int size() const { return top + 1; }
};
template <typename T>
void Stack<T>::push(const T&item) {
    if(top >= length-1) {
        std::cout << "Stack Overflow" 
            <<std::endl;
        return;
    }
    top++;
    arr[top] = item;
    std:: cout << "Added " << item
        << " to the top" <<std::endl;
}
int main(){
    Stack<int> stack1;
    Stack<double> stack2;
    int count{};
    std::cin >> count;
    std:: cout<< "<int>" <<std::endl;
    for(int i =0; i< count; i++){
        int val;
        std:: cout << "Enter element " << i+1 << ": ";
        std:: cin >> val;
        stack1.push(val);
    }
    std:: cout << "Top element is: " 
        << stack1.pop() << std::endl;
    std:: cout << "<double" <<std::endl;
    for(int i=0; i<count; i++) {
        double val;
        std:: cout << "Enter element " << i+1 << ": ";
        std:: cin >> val;
        stack2.push(val);
    }
    std:: cout<< "Top element is: "
        << stack2.pop() << std::endl;
    return 0;
}


