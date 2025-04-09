//SQUARE - PATTERN 
// n : 4              n = 3 :
//1 2 3 4            //1 2 3 
//1 2 3 4            //1 2 3 
//1 2 3 4            //1 2 3 
//1 2 3 4 
#include <iostream>
using namespace std;
int main(){
    int n = 4;
   
    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j=0; j <=n; j++){
            cout << ch ;
            ch = ch + 1; // A = 65 so B = 65 + 1
        }
        cout << endl;
    }
    return 0;
}