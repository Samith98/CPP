/*
Refer the online compiler link for output:
https://ide.geeksforgeeks.org/bd9ad5b7-a656-4420-af8a-397e32a95a87
*/

#include <iostream>

using namespace std;

int naiveLcm(int number1, int number2){
    int lcmNum = max(number1, number2);
    while(true){
        if(((lcmNum%number1)==0) && ((lcmNum%number2)==0))
            break;
        lcmNum++;
    }
    return lcmNum;
}

// Efficeint LCM
int efficentGCD(int number1, int number2){
    if(number2==0)
        return number1;
    else return efficentGCD(number2, number1%number2);
}

int efficientLCM(int number1, int number2){
    return (number1*number2)/efficentGCD(number1, number2);
}

int main(){
    int input1, input2;
    cin>>input1>>input2;
    cout<<naiveLcm(input1, input2)<<endl;
    cout<<efficientLCM(input1, input2)<<endl;
    return 0;
}
