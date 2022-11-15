/*
Refer the online compiler link for output:
https://ide.geeksforgeeks.org/8e14dfdc-7acf-46d5-9f14-ae52bb1380a7
*/

#include <iostream>

using namespace std;

int reverseDigit(int number){
    int reverseNumber=0;
    int lastDigit;
    while(number!=0){
        lastDigit=number%10;
        reverseNumber = reverseNumber*10+lastDigit;
        number/=10;
    }
    return reverseNumber;
}

bool isPlaindrome(int number){
    return (reverseDigit(number)==number);
}

int main(){
    int input;
    cin>>input;
    if(isPlaindrome(input)){
        cout<<input<<" is a Palindrome."<<endl;
    } else {
        cout<<input<<" is not a Palindrome."<<endl;
    }
    return 0;
}
