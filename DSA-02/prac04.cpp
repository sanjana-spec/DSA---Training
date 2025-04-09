#include <iostream>
using namespace std;

int main(){
    char c = 'A';
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j < i + 1; j++){
            cout << c;
        }c = c + 1;
        cout << endl;
    }
    return 0;
}