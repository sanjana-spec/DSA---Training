#include <iostream>
using namespace std;
const int Max_size = 100;
class Queue{
    private:
    int arr[Max_size] ;
    int front;
    int rear;
    public:
    Queue(){
        front = -1;
        rear = -1;
    }
    bool isEmpty(){
        return (front == -1 && rear == -1)  ;      
    }
    bool isFull(){
        return (rear == Max_size - 1);
    }
    void enqueue(int item){
        if (isFull()){
            cout << "Queue full" <<  endl;
        }
        else if(isEmpty()){
            front = rear = 0;
        }else{
            rear ++;
        }
        arr[rear] = item;
        cout << "Enqueued item is :" << item << endl;
    }
    void dequeue(){
        if(isEmpty()){
            cout << "Queue is empty";
        }
        else if(front == rear) {//single element is present
            front = rear = -1;
        }
        else{
            front++;
        }
    }
    int frontElement(){
        if(isEmpty()){
            cout <<"Empty Queue" << endl;
            return -1;
        }
        return arr[front];
    }
    int rearElement(){
        if(isEmpty()){
            cout <<"Empty Queue" << endl;
            return -1;
        }
        return arr[rear];
    }
    void display(){
        if(isEmpty()){
            cout <<"Queue is empty" << endl;
            return ;
        }
        for(int i = front ; i <= rear; i++){
            cout << arr[i] << " ";
        }cout << endl;
    }
};
int main(){
    Queue q ;
    int arr[] = {1,3,5,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        q.enqueue(arr[i]);
    }
    q.display();
    q.dequeue();
    q.display();
    cout << q.frontElement() <<  "  " << q.rearElement() << endl;
    return 0;
}