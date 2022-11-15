/*
Refer the online compiler link for output:
https://ide.geeksforgeeks.org/e7c7c5fc-cb93-48e3-9740-65223fac1e09
*/

#include <iostream>

using namespace std;

int factorial(int digit){
    int fact = 1;
    for(int i=2; i<=digit; i++)
        fact*=i;
    return fact;
}

int iterativeTrailingZeroCount(long long int number){
    int zeroCount;
    while((number%10)==0){
        ++zeroCount;
        number/=10;
    }
    return zeroCount;
}

int efficientTrailingZeroCount(long long int number){
    int zeroCount = 0;
    for(int i=5; i<=number; i=i*5){
        zeroCount = zeroCount + (number/i);
    }
    return zeroCount;
}

int main(){
    int input;
    cin>>input;
    int factNum = factorial(input);
    cout<<iterativeTrailingZeroCount(factNum)<<endl;
    cout<<efficientTrailingZeroCount(input)<<endl;
    return 0;
}
