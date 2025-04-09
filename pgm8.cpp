//count-sort algorithm
#include <iostream>
using namespace std;
void countSort(int arr[], int size){
    //find the max value
    int k = arr[0];
    for(int i=0; i< size; ++i){
        if(arr[i] > k){
            k = arr[i];
        }
    }
    //create a count array of (max+1) ten elements
   // int count[10] = {0};
    int * count = new int[k+1];
    for(int i=0; i < k+1; i++){
            count[i] = 0;
       // count[arr[i]]++;
    }
    //calculate the frequency of elements
    for(int i =0; i < size; i++){
        count[arr[i]]++;
    }
    //calculate the cumulative frequency
    //cur = cur + prev
    //sjip the 0 index and start from 0
    for(int i =1; i <=k; ++i){ //we need to store
        count[i] += count[i-1];
    }
    //output array
    int output[size];
    //start from end
    for(int i = size-1; i>= 0; i--){
        output[--count[arr[i]]] = arr[i];
    }
    //copy back to the input array
    for(int i=0; i<size; i++){
        arr[i] = output[i];
    }
    delete [] count;

}
int main(){
    int arr[] = {3, 4,6,1,4,3,2,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< "Before :";
    for(int x  : arr){
        cout << x <<" ";
    }
    countSort(arr,size);
    cout << "After :";
    for(int x: arr){
        cout << x << " ";
    }
    return 0;
}
