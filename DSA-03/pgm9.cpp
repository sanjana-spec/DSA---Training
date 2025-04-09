#include <bits/stdc++.h>
using namespace std;

int main(){
    forward_list<int> fList = {10,20,30};
    fList.push_front(5);
    fList.push_front(5);
    cout << "fList :" << endl;
    for(auto x: fList){
        cout << x << " ";
    }
    cout <<  endl;
    //auto -> iterator -> used to traverse STL libraries
    for(auto it = fList.begin(); it != fList.end(); ++it){
        cout << *it << " ";
    }cout << endl ;
    //What is the auto keyword replacing in the looping statement??
    cout<< "Using Iterator:" << endl;
    for(forward_list<int>::iterator it = fList.begin(); it != fList.end(); ++it){
        cout << *it << " ";
    }cout << endl ;
    auto it = fList.begin();
    while(next(it) != fList.end()){
        ++it;
    }
    fList.insert_after(it, 50); //position , value
    for(auto x:fList){
        cout << x << " ";
    }cout << endl;
    // -->> 5 5 10 20 30 50 (it is pointing to 30 here)
    fList.insert_after(it, 40); //position , value
    for(auto x:fList){
        cout << x << " ";
    }cout << endl;
    // 5 5 10 20 30 40 50 (the 40 comes between 30 and 50)
    fList.insert_after(++it, 40); //position , value
    for(auto x:fList){
        cout << x << " ";
    }cout << endl;// 30 50 40
    return 0;
}