#include <iostream>
using namespace std;
//m = n
int main(){
    int n;
    cout<<"rows and columns:" <<endl;
    cin >> n;
    int ** twod = new int *[n];
    for(int i=0; i < n; ++i){
        twod[i] = new int[n];
        for(int j=0; j<n; ++j){
            cin >> twod[i][j];
        }
    }
    for(int i=0; i < n; ++i){
        for(int j=0; j<n; ++j){
            cout << twod[i][j] <<" ";
        }cout << endl;
    }
    delete [] twod;
    return 0;
}