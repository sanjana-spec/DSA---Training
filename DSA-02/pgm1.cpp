//MERGE - TWO - SORTED ARRAYS
#include <iostream>
using namespace std;
void mergeTwosortedArrays(int a1[], int n1, int a2[], int n2,int a3[]){
    int i = 0;
    int j = 0;
    int k =0;
    while(i < n1 && j < n2){
        if(a1[i] < a2[j]){
            a3[k++] = a1[i++];
        }
        else{
            a3[k++] = a2[j++];
        }
    }
    while(i < n1){
        a3[k++] = a1[i++];
    }
    while(j < n2){
        a3[k++] = a1[j++];
    }
    // for(int i=0; i<k; i++){
    //     cout << a3[i] <<" ";
    // }
   
}
int main(){
    int a1[5] = {1,3,5,7,9};
    int a2[3] = {2,4,6};
    int a3[8] = {0};
    mergeTwosortedArrays(a1,5,a2,3,a3);
    for(int i=0; i<8; i++){
         cout << a3[i] <<" ";
    }
    return 0;
}