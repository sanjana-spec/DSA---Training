#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void generateBinaryNumbers(int N){
    queue<string> q;
    q.push("1");
    while(N--){ // tells N!= 0
        string cur = q.front();
        q.pop();
        cout << cur << " ";
        q.push(cur + "0"); //concatination : 11 + 0 = 110
        q.push(cur + "1");
    }
}
int main(){
    int N = 5;
    generateBinaryNumbers(5);
    return 0;
}

