#include <iostream>

using namespace std;

bool isPrime(int number){
    if(number==1) return false;
    if(number==2 || number==3) return true;
    if(number%2==0 || number%3==0) return false;
    for(int i=5; i*i<number; i+=6)
        if(number%i==0 || number%(i+2)==0) return false;
    return true;
}

void primeFactors(int n){
    for(int i=2; i<n; i++){
        if(isPrime(i)){
            int x=i;
            while(n%x==0){
                cout<<i<<" ";
                x *= i;
            }
        }
    }
}

void effPrimeFactors(int n){
    if(n<=1) return;
    for(int i=2; i*i<n; i++){
        while(n%i==0){
            cout<<i<<" ";
            n /= i;
        }
    }
    if(n>1)
        cout<<n<<endl;
}

void optPrimeFactors(int n){
    if(n<=1) return;
    while(n%2==0){
        cout<<2<<" ";
        n /= 2;
    }
    while(n%3==0){
        cout<<3<<" ";
        n /= 3;
    }
    for(int i=5; i*i<=n; i+=6){
        while(n%i==0){
            cout<<i<<" ";
            n /= i;
        }
        while(n%(i+2)==0){
            cout<<i+2<<" ";
            n /= (i+2);
        }
    }
    if(n>3)
        cout<<n<<endl;
}

int main(){
    int input;
    cin>>input;
    primeFactors(input);
    effPrimeFactors(input);
    return 0;
}
