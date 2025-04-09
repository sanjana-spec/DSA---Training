//MERGE - SORT 
#include <iostream>
using namespace std;
void merge(int *arr, int s, int e){
    int mid = s + (e-s) / 2;
    int l1 = mid - s +1;
    int l2 = e - mid;
    //create dynamic arrays foe first and second
    int * first = new int[l1];
    int * second = new int[l2];
    int k = s;
    for(int i =0; i <l1; i++){
        first[i] = arr[k++];
    }
    k = mid + 1;
    for(int i =0; i < l2; i++){
        second[i] = arr[k++];
    }
    int i = 0;
    int j = 0;
    k = s;
    while(i < l1 && j < l2){
        if(first[i] < second[j]){
            arr[k++] = first[i++];
        }
        else{
            arr[k++] = second[j++];
        }
    }
        while(i < l1){
            arr[k++] = first[i++];
        }
        while(j < l2){
            arr[k++] = second[j++];
        }
    
    //delete the resources 
    delete [] first;
    delete [] second;
}
void mergeSort(int * arr, int s, int e ){
    //base case
    if(s >=e ){
        return; //if s==e then there is only one element present
    }
    int mid = s + (e-s)/2;
    //left part
    mergeSort(arr, s, mid);
    //right part
    mergeSort(arr, mid+1, e);
    //merge left and right sorted arrays
    merge(arr, s, e);
}
int main(){
    int arr[] = {32,4,56,8,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, size-1);
    for(auto x : arr){
        cout << x <<" ";
    }cout << endl;
    return 0;
}