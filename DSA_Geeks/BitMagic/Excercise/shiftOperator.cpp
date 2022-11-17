#include <iostream>

using namespace std;

void leftShift(){
    int x = 3;
    cout<<(x<<1)<<endl;
    cout<<(x<<2)<<endl;
    int y = 4;
    cout<<(x<<y)<<endl;
}

void rightShift(){
    int x = 35;
    cout<<(x>>1)<<endl;
    cout<<(x>>2)<<endl;
    int y = 4;
    cout<<(x>>y)<<endl;
}

void negateOp(){
    unsigned int x = 1;
    cout<<(~x)<<endl;
    x = 5;
    cout<<(~x)<<endl;
}

int main(){
    leftShift();
    cout<<endl;
    rightShift();
    cout<<endl;
    negateOp();
    cout<<endl;
    return 0;
}