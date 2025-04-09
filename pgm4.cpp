#include <iostream>
using namespace std;
int main(){
    int arr[] = {23, 35, 67, 78};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i<size; ++i){
        cout << *(arr)<< endl;
    }
}
