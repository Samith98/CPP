/*
Refer the online compiler link for output:
https://ide.geeksforgeeks.org/a3851c0c-2434-4ce8-a023-cbcbcf35fa89
*/

#include <iostream>

using namespace std;

bool isPrime(int number){
    if(number==1) return false;
    for(int i=2; i<number; i++)
        if(number%i==0)
            return false;
    return true;
}

bool effIsPrime(int number){
    if(number==1) return false;
    for(int i=2; i*i<=number; i++)
        if(number%i==0)
            return false;
    return true;
}

bool isPrimeBest(int number){
    if(number==1) return false;
    if((number==2) || (number==3)) return true;
    if((number%2)==0 || (number%3)==0) return false;
    for(int i=5; i*i<=number; i+=6){
        if((number%i)==0 || (number%(i+2))==0) return false;
    }
    return true;
}

int main(){
    int input;
    cin>>input;
    cout<<isPrime(input)<<endl;
    cout<<effIsPrime(input)<<endl;
    cout<<isPrimeBest(input)<<endl;
    return 0;
}
