#include <iostream>

using namespace std;

double absolute(double number){
    if(number<0)
        return number*(-1);
    return number;
}

int main(){
    double input;
    cin>>input;
    cout<<absolute(input)<<endl;
    return 0;
}
