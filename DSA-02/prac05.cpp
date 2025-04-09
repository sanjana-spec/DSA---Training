#include <iostream>
using namespace std;

int main(){
    //forward triangle
    // for(int i = 0; i< 4; i++){
    //     for(int j = 1; j <= i+1; j++ ){
    //         cout << j;
    //     }cout << endl;
    // }
    //reverse triangle pattern
   
    //FLOYD'S TRIANGLE
        char num = 'A';
    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout << num;
    //         num++;
    //     }cout << endl;
    // }
    for(int i = 1; i<= 4; i++){
        for(int j = i ; j > 0; j--){
            cout << char(num + j - 1);
        } 
        cout << endl;
    }

    return 0;
}