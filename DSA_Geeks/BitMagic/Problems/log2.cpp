#include <iostream>

int log2(int x){
    int res = 0;
    while(x >>= 1)
        res++;
    return res;
}

int main(){
    int inp;
    std::cin>>inp;
    std::cout<<log2(inp)<<std::endl;
    return 0;
}