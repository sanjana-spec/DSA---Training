#include<iostream>
using namespace std;

int main(){
    int n = 4;
    char s = '*'; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << s;
        }cout << endl;
    }
    return 0;
}