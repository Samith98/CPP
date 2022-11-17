/*
Refer the online compiler link for output:
https://ide.geeksforgeeks.org/1a36dbe3-61ba-4ea5-88ff-64b14e88a8a7
*/

#include <iostream>

using namespace std;

int factorial(int number){
    if(number==0) return 1;
    return number*factorial(number-1);
}

// Better function since the recursion is complex
int iterativeFactorial(int number){
    int factNumber=1;
    for(int i=2; i<=number; i++)
        factNumber*=i;
    return factNumber;
}

int main(){
    int input;
    cin>>input;
    cout<<"Factorial of "<<input<<" is:"<<factorial(input)<<endl;
    cout<<"Factorial of "<<input<<" is:"<<iterativeFactorial(input)<<endl;
    return 0;
}
