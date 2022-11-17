/*
Refer the online compiler link for output:
https://ide.geeksforgeeks.org/f597c25a-06c9-4c7b-8115-677f7175706d
*/

#include <iostream>

using namespace std;

int naiveGcd(int number1, int number2){
    int gcdNum = min(number1, number2);
    while(gcdNum!=0){
        if(((number1%gcdNum)==0) && ((number2%gcdNum)==0))
            break;
        gcdNum--;
    }
    return gcdNum;
}

int euclideanGcd(int number1, int number2){
    while(number1!=number2){
        if(number1>number2)
            number1 -= number2;
        else
            number2 -= number1;
    }
    return number1;
}

int efficeintEuclideanGcd(int number1, int number2){
    if(number2 == 0)
        return number1;
    else
        return efficeintEuclideanGcd(number2, number1%number2);
}

int main(){
    int input1, input2;
    cin>>input1>>input2;
    cout<<naiveGcd(input1, input2)<<endl;
    cout<<euclideanGcd(input1, input2)<<endl;
    cout<<efficeintEuclideanGcd(input1, input2)<<endl;
    return 0;
}
