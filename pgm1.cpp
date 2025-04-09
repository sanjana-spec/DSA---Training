#include<iostream>
using namespace std;
int main(){
    int arr[4] = {1,2,3};
    cout << arr[4];
    int n;
    cout << "n :"<< endl;
    cin >> n;
    int * oneD = new int[n]; //creates an array of size n
    cout << n << endl;
    for (int i =0; i<n; ++i){
        cout << "Enter :"<< endl;
        cin >> arr[i];
    }
    cout << "Elements are :"<<endl;
    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }cout << endl;
    delete [] oneD;
    return 0;
}