#include <iostream>
#include <vector>

bool isPrime(int number){
    if(number==1) return false;
    if((number==2) || (number==3)) return true;
    if((number%2)==0 || (number%3)==0) return false;
    for(int i=5; i*i<=number; i+=6){
        if((number%i)==0 || (number%(i+2))==0) return false;
    }
    return true;
}

void allPrimes(int n){
    for(int i=0; i<=n; i++){
        if(isPrime(i))
            std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}

void seiveAlgorithm(int n){
    std::vector<bool> Prime(n+1, true);
    for(int i=2; i*i<=n; i++){
        if(Prime[i])
            for(int j=2*i; j<=n; j+=i)
                Prime[j]=false;
    }
    for(int i=2; i<=n; i++)
        if(Prime[i])
            std::cout<<i<<" ";
    std::cout<<std::endl;
}

//Optimized solution of Seive of Eratosthenes seiveAlgorithm
void optSeiveAlgorithm(int n){
    std::vector<bool> prime(n+1, true);
    for(int i=2; i<=n; i++){
        if(prime[i]){
            std::cout<<i<<" ";
            for(int j=i*i; j<=n; j+=i)
                prime[j]=false;
        }
    }
    std::cout<<std::endl;
}

int main(){
    int input;
    std::cin>>input;
    allPrimes(input);
    seiveAlgorithm(input);
    optSeiveAlgorithm(input);
    return 0;
}
