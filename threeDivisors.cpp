#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Naive solution [Brute force solution]
/*
class Solution{
    public:
        bool hasThreeDivisor(int n){
            int counter = 0;
            for(int i=1; i<=n; i++)
                if(n%i==0)
                    counter++;
            return counter == 3;
        }

        int threeDivisors(int N){
            int divCounter = 0;
            for(int i=1; i<=N; i++)
                if(hasThreeDivisor(N))
                    divCounter++;
            return divCounter;
        }
}
*/

// Optimized Solution
class Solution{
    public:
        bool isPrime(int n){
            if(n<=1) return false;
            for(int i=2; i<=sqrt(n); i++)
                if(n%i==0) return false;
            return true;
        }

        int threeDivisors(int n){
            int divCounter = 0;
            for(int i=1; i<=sqrt(n); i++)
                if(isPrime(i))
                    divCounter++;
            return divCounter;
        }
};

int main(){
    int n;
    cin>>n;
    Solution ob;
    cout<<ob.threeDivisors(n)<<endl;
    return 0;
}