#include <iostream>
using namespace std;

int hammingWeight(int n){
    int count = 0;
    while( n > 0){
        if(n & 1){ //java ->> n & 1 == 1
            count++;
        }
        n = n >> 1; // Right shift the number by 1 bit
    }
    return count;
}
int main(){
    cout << hammingWeight(11) << endl; 
    cout << hammingWeight(5) << endl;
    cout << hammingWeight(10) << endl;
    cout << hammingWeight(0) << endl;
    return 0;
}
