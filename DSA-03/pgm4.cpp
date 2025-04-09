#include <iostream>
using namespace std;

const int  MAX_SIZE = 100;
class Stack{
    private:
    int arr[MAX_SIZE];
    int top;
    public:
    Stack(){
        top = -1; //its the index of the top
    }
    void push(int element){
        if(top == MAX_SIZE - 1){
            cout << "Stack Overflow" << endl;
        }else{
            top++;
            arr[top] = element;//increment top and assign value to the top index
        }
        
    }
    void pop(){
        if(top == -1){
            cout <<"Stack undreflow" << endl;
        }else{
            cout << "Popped element: " << arr[top] << endl;
            top--;//decrement top
        }
    }
    int peek(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return -1;//invlaid value
        }else{
            return arr[top];//return the top element
        }
    }
    bool isEmpty(){
        return top == -1;//if top is -1 then stack is empty
    }
    int size(){
        return top + 1;//size is top + 1 // example: if top is 2 then size is 3
    }
};
int main(){
    Stack stack;
    int arr[] = {3,1,4,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i < n; i++){
        stack.push(i);
    }
    cout << "top element " << stack.peek() << endl;
    stack.pop();
    cout << "top element " << stack.peek() << endl;
    cout <<stack.isEmpty() << endl;
    cout << "Size :" << stack.size() << endl;
    return 0;
}