//selection sort
#include <iostream>
using namespace std;
void selectionsort(int arr[], int n){
    for(int i=0; i< n-1; i++){
        int minindex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        if(minindex != i){
            swap(arr[i], arr[minindex]);
        }
    }
}
int main(){
    int arr[] = {7,6,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr,n);
    cout << "Selection sort:";
    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}
