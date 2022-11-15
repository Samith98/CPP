#include <iostream>

using namespace std;

void allDivisors(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

// Un-Ordered Optimised solution
void unOrdOptAllDivisors(int n){
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=(n/i))
                cout<<n/i<<" ";
        }
    }
    cout<<endl;
}

//Ordered Optimised solution
void ordOptAllDivisors(int n){
    int i;
    for(i=1; i*i<n; i++){
        if(n%i==0)
            cout<<i<<" ";
    }
    for(; i>=1; i--){
        if(n%i==0)
            cout<<n/i<<" ";
    }
    cout<<endl;
}

int main(){
    int input;
    cin>>input;
    allDivisors(input);
    unOrdOptAllDivisors(input);
    ordOptAllDivisors(input);
    return 0;
}
