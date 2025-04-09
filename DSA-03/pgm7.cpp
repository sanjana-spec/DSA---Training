#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums){
    stack<int> s;
    vector<int> res(nums.size(), -1);
    for(int i= nums.size() - 1; i>= 0; --i){
        while(!s.empty() && s.top() <=nums[i]){
            s.pop();
        }
        if(!s.empty()){
            res[i] = s.top();
        }
        s.push(nums[i]);
    }
    return res;
}
int main(){
    vector<int> arr = {4,5,2,25};
    vector<int> res = nextGreaterElement(arr);
    for(int i : res){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
