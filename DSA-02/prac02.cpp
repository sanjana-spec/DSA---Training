#include <iostream>
using namespace std;

int main(){
    int n = 3;
    char num = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << num;
            num++;
        }
        cout << endl;
    }
    return 0;
}