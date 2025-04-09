//selectionsort
#include <iostream>
using namespace std;
void insertionsort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j =i - 1;
        while(j>=0 && arr[j] > temp){
            //shift operation
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main(){
    int arr[] = {7,6,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr,n);
    cout << "Insertion sort:";
    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}
