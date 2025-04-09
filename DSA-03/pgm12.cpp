#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> numbers={1,2,3,4,5};
    for(auto x: numbers){
        cout<<x<<" ";
    }cout<<endl;

    for(int i=0;i<numbers.size();++i){
        cout<<numbers[i]<<" ";
    }cout<<endl;
    // Types of Initialisation
    vector<int> vector1(5);
    vector<int> vector2(3,10);
    int arr[]={1,2,3};
    vector<int> vector3(arr,arr+3);
    for(auto x:vector3){
        cout<<x<<" ";
    }cout<<endl;
    vector3.push_back(4);
    vector3.push_back(5);
    for(auto x:vector3){
        cout<<x<<" ";
    }cout<<endl;
    vector3.pop_back();
    for(auto x:vector3){
        cout<<x<<" ";
    }cout<<endl;
    vector3.resize(10); // Resize and default = 0
    for(auto x:vector3){
        cout<<x<<" ";
    }cout<<endl;
    vector3.resize(15,100); // resize with particular value for elements
    for(auto x:vector3){
        cout<<x<<" ";
    }cout<<endl;
    vector3.insert(vector3.begin(),0);
    for(auto x:vector3){
        cout<<x<<" ";
    }cout<<endl;
    return 0;
}