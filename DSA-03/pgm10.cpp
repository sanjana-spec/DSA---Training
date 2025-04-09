#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> lst1;//default constructor
    list<int> lst2(3 , 10); // (10, 10, 10) ...( n , value) //parametirised constructor
    list<int> lst3(lst2); //copy constructor;
    lst1.push_back(10);
    lst1.push_front(20);
    lst1.insert(lst1.begin(), 15); // 15 20 10 .... if (++lst1.begin(), 15) then-> 20 15 10
    for(int i : lst1){
        cout << i << " ";
    }cout << endl;
    for(list<int>::iterator it = lst1.begin(); it != lst1.end(); ++it){
        cout<< *it << " ";
    }cout << endl;
    cout << "Backward :"<< endl;
    for(list<int>::reverse_iterator it = lst1.rbegin(); it != lst1.rend(); ++it){
        cout<< *it << " ";
    }cout << endl;
    return 0;
}