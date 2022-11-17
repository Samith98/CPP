#include <bits/stdc++.h>

class Solution{
    public:
        int factorialDigitaCount(int N){
            double fact = 1;
            for(int i=2; i<=N; i++)
                fact += log10(i);
            return (int)fact;
        }
};

int main(){
    int inp;
    std::cin>>inp;
    Solution ob;
    std::cout<<ob.factorialDigitaCount(inp)<<std::endl;
    return 0;
}
