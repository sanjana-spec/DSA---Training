//WAVE - SORT
#include <iostream>
#include <algorithm>
using namespace std;

void waveSort(int arr[], int n){
    sort(arr,arr+n);
    // for(int i=0; i< n; i++){
    //     cout << arr[i] << " ";
    // }
    for(int i=0; i< n-1; i+=2){
        swap(arr[i], arr[i+1]);
    }
}
int main(){
    int arr[] = {10,90,40,2,1,5,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    waveSort(arr,n);
    for(auto x :arr){
        cout << x << " ";
    }cout << endl;
    return 0;
}
//std::fill(first:a,last:a+5,value:10);
//cout << a[4]; -------->>> 10