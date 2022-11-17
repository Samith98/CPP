#include<bits/stdc++.h>

class Solution{
    public:
        int modInverse(int a, int m){
            for(int i=0; i<m; i++){
                if(((a % m) * (i % m)) % m == 1)
                    return i;
            }
            return -1;
        }
};

int main(){
    int a, m;
    std::cin>>a>>m;
    Solution ob;
    std::cout<<ob.modInverse(a, m)<<std::endl;
    return 0;
}
