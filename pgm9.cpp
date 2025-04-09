//bubble-sort algorithm
#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i = 1; i < n; i++){ //no of iterations
        for(int j=0; j<n-1; j++){ //go till second last
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {7,6,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,n);
    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}
