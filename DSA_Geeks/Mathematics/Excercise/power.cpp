#include <iostream>

int power(int x, int n){
    int res=1;
    for(int i=0; i<n; i++)
        res*=x;
    return res;
}

int effPower(int x, int n){
    if(n==0) return 1;
    int temp = effPower(x, n/2);
    temp=temp*temp;
    if(n%2==0) return temp;
    else return temp*x;
}

int iterativePower(int x, int n){
    int res = 1;
    while(n>0){
        if(n%2!=0)
            res *= x;
        x *= x;
        n /= 2;
    }
    return res;
}

int main(){
    int num, pow;
    std::cin>>num>>pow;
    std::cout<<power(num, pow)<<std::endl;
    std::cout<<effPower(num, pow)<<std::endl;
    std::cout<<iterativePower(num, pow)<<std::endl;
    return 0;
}
