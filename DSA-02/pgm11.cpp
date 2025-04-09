#include <iostream>
using namespace std;

int firstOccurences(int arr[], int n, int key){
    int s =0;
    int e = n-1;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1; // go to extreme left for first occurence
        }else if(arr[mid] < key){
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}
int lastOccurences(int arr[], int n, int key){
    int s =0;
    int e = n-1;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1; // go to extreme right for last occurence
        }else if(arr[mid] < key){
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}
int totalOccurences(int arr[], int n, int key){
    int fo = firstOccurences(arr,n,key);
    int lo = lastOccurences(arr,n,key);
    int to = lo - fo + 1;
    return to;
}
int main(){
    int arr[] = {1,2,3,3,3,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int fo = firstOccurences(arr, n , 3);
    int lo = lastOccurences(arr, n, 3);
    int to = totalOccurences(arr,n, 3);
    cout<< "first occurence at index :" << fo << endl;
    cout<< "last occurence at index:" << lo << endl;
    cout<< "total occurence of 3 : " << to << endl;
    return 0;
}