#include<iostream>
using namespace std;

class Node {
public: // Constructor needs to be public
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void insertattail(Node** head, int newvalue) {
    Node* newNode = new Node(newvalue);
    if (*head == nullptr) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != nullptr) {
        temp = temp->next; // Traverse to the end of the list
    }
    temp->next = newNode; // Append the new node
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "null" << endl;
}

Node* addtwonumbers(Node* l1, Node* l2) {
    Node* dummy = new Node(0);
    Node* curr = dummy;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry != 0) {
        int sum = carry;
        if (l1) {
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2) {
            sum += l2->data;
            l2 = l2->next;
        }
        carry = sum / 10;
        curr->next = new Node(sum % 10); // Create a new node for the result
        curr = curr->next; // Move to the next node
    }

    return dummy->next; // Return the head of the result list
}
int main(){
    Node* l1 = nullptr;
    Node* l2 = nullptr;
    int arr1[] = {2,4,3}; //342
    int arr2[] = {5,6,4}; //465
    int n = sizeof(arr1)/sizeof(arr1[0]);
    for(int i =0; i<n; i++){
        insertattail(&l1, arr1[i]);
        insertattail(&l2, arr2[i]);
    }
    cout << "First number: " ;
    printList(l1);
    cout << "Second number: " ;
    printList(l2);
    Node* result = addtwonumbers(l1, l2);
    cout << "Resultant list: " ;
    printList(result);
    // Free the allocated memory for the result list
    delete result;
    return 0;
}