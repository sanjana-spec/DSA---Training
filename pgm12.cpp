#include<iostream>
using namespace std;
int binaryserachSquareRoot(int n){
    int s = 0;
    int e = n;
    int ans = -1;
    while(s < e){
        int mid = (s+e)/2;
        int square = mid * mid;
        if(square == n) {
            return mid;
        }
        else if(square > n){
            e = mid -1;
        }
        else{
            ans = mid;
            s = mid + 1 ;
        }
    }
    return ans;
}
int main(){
    cout << binaryserachSquareRoot(36)<< endl;
    int arr[10] = {[0... 9] = 1};
    cout << arr[9] << endl;
    return 0;

}
