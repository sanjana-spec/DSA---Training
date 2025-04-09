//LINKED - LIST PROBLEM 01
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val) : data(val) , next(nullptr){}
};
int getLength(Node* head){
    int length = 0;
    while(head){
        length++;
        head = head->next;
    }
    return length;
}
Node* getIntersection(Node* headA, Node* headB){
    int lenA = getLength(headA);
    int lenB = getLength(headB);
    //shortening the longest list
    while(lenA > lenB){
        headA = headA->next;
        lenA--;
    }
    while(lenB > lenA){
        headB = headB->next;
        lenB--;
    }
    //comparing 
    while(headA && headB){ 
        if(headA == headB){
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return nullptr;

}
//                           OR                           //
// Node* getIntersection(Node* headA, Node* headB) {
//     while (headA != nullptr) {
//         Node* temp = headB;
//         // Check for intersection by iterating through the second list
//         while (temp != nullptr) {
//             if (headA == temp) {
//                 return headA; // Intersection found
//             }
//             temp = temp->next;
//         }
//         headA = headA->next;
//     }
//     return nullptr; // No intersection
// }

int main(){
    //common nodes
    Node* common = new Node(8);
    common->next = new Node(9);
    //first list
    Node* headA = new Node(1);
    headA->next = new Node(2);
    headA->next->next = common;
    //second list
    Node* headB = new Node(3);
    headB->next = new Node(4);
    headB->next->next = new Node(5);
    headB->next->next->next = common;
    Node* intersection = getIntersection(headA,headB);
        if(intersection){
            cout << "Intersection node:" << intersection-> data << endl;
        }
        else{
            cout<< "No intersection" << endl;
        }

    return 0;
}