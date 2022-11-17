#include <bits/stdc++.h>

class Solution{
    public:
        int  geometricProgression(int A, int B, int N){
            if(N==1) return A;
            else if(N==2) return B;
            else{
                double r = B*1.0/A;
                return A*pow(r, N-1);
            }
        }
};

// Input a=1; b=2; n=5;

int main(){
    int a, b, n;
    std::cin>>a>>b>>n;
    Solution ob;
    std::cout<<ob.geometricProgression(a,b,n)<<std::endl;
    return 0;
}
