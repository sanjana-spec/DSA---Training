#include <iostream>
using namespace std;
//dangling pointer
int * function(){
    static int a = 20;
    return &a;
}
int main(){
    int *ptr = function();
    cout << *ptr <<endl;
    //auto = 2.5F;
    return 0;

}
