//QUICK - SORT
#include<iostream>
#include <algorithm>
using namespace std;
int partitionIndex(int arr[], int s, int e){
    int pivot = arr[s];
    int count = 0;
    for (int  i = s + 1; i <= e; ++i)
    {
        if(arr[i] <= pivot){
            count++;
        }
    }
    int pivotindex = s + count;
    swap(arr[pivotindex], arr[s]);
    int i = s;
    int j = e;
    while(i < pivotindex && j > pivotindex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotindex && j > pivotindex){ //suppose there is a value greater than pivot in the left part or vice-versa.. then we are swapping them
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[], int s, int e){
    //base case
    if(s >= e){
        return;
    }
    //pivot for recurrsion
    int p = partitionIndex(arr,s,e);
    //sorting left and right part
    quicksort(arr, s, p-1); //left
    quicksort(arr, p+1, e);
}
int main(){
    int arr[] = {3,1,2,5,8,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,size-1);
    for(auto x : arr){
        cout << x << " ";
    }cout << endl;
    return 0;
}