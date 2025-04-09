//FOLYD'S ALGO
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val) : data(val) , next(nullptr){};
};
bool detectCycle(Node* head){
    Node* fast = head;
    Node* slow = head;
    while(fast && fast->next){
        slow = slow -> next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
}
int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    cout<< (detectCycle(head) ? "Cycle Detected" : "No Cycle") << endl;
    return 0;

}