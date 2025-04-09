#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void printList(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" -> ";
        head=head->next;
    }cout<<"null"<<endl;
}

void reverselist(Node** head){
    Node* prev = nullptr;
    Node* curr = *head;
    Node* forward = nullptr;
    while(curr != nullptr){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward; 
    }
    *head = prev;
}

void insertattail(Node** head, int newvalue){
    Node* newNode = new Node();
    newNode-> data = newvalue;
    newNode->next = nullptr;
    //empty list
    if(*head == nullptr){
        *head = newNode;
        return;
    }
    //multiple nodes
    Node* temp = *head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}
int main(){
    Node* head = nullptr;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<n; i++){
        insertattail(&head, arr[i]);
    }
    cout<< "Original list " << endl;
    printList (head);
    reverselist(&head);
    cout << "Reverse list :" <<endl;
    printList(head);
    return 0;
}