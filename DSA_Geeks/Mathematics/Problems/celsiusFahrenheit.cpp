#include <iostream>

using namespace std;

double toFahrenheit(double celsius){
    return ((celsius*9/5)+32);
}

double toCelsius(double fahrenheit){
    return ((fahrenheit-32)*5)/9;
}

int main(){
    double input;
    cin>>input;
    cout<<toFahrenheit(input)<<endl;
    // cout<<toCelsius(toFahrenheit(input))<<endl;
    return 0;
}
