/*
Refer the online compiler link for output:
https://ide.geeksforgeeks.org/255d3ada-0388-4707-809b-babb82a3321b
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int iterativeDigitCount(long long int digit){
    int count=0;
    while(digit!=0){
        digit/=10;
        count++;
    }
    return count;
}

int recursiveDigitCount(long long int num){
    if(num==0) return 0;
    return 1+recursiveDigitCount(num/10);
}

int logDigitCount(long long int num){
    return floor(log10(num))+1;
}

int main() {
    long long int number;
    cin>>number;
    cout<<iterativeDigitCount(number)<<endl;
    cout<<recursiveDigitCount(number)<<endl;
    cout<<logDigitCount(number)<<endl;
    return 0;
}
