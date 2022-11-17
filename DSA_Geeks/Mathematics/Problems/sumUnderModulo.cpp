#include <bits/stdc++.h>

class Solution{
    public:
        long long sumUnderModulo(long long int a, long long int b){
            long int m = pow(10, 9) + 7;
            return (((a % m) + (b % m)) % m);
        }
};

// Input: a = 9223372036854775807; b = 9223372036854775807;

int main(){
    long long int a, b;
    std::cin>>a>>b;
    Solution ob;
    std::cout<<ob.sumUnderModulo(a,b)<<std::endl;
    return 0;
}
