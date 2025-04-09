#include <iostream>
#include <stack>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1 = 100;
        int sum1 = 0;
        int sum2 = 0;
        int carry = 0;
        while(l1 && l2){
            sum1 += num1 * l1->val;
            sum2 += num1 * l2->val;
            num1 = num1/ 10;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        int total = sum1 + sum2;
        ListNode* dummy = new ListNode(); 
        ListNode* current = dummy;
        while(total != 0){
            int val = total % 10;
            ListNode* temp = new ListNode(val);
            current->next =  temp;
            current = temp;
            total = total / 10;
        }
        return dummy->next;
    }
};

int main() {
    // Create two example linked lists
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    // Solution object
    Solution solution;
    ListNode* result = solution.addTwoNumbers(l1, l2);

    // Print the result linked list
    cout << "Result: ";
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

    // Cleanup (free memory)
    delete l1;
    delete l2;
    delete result;

    return 0;
}
