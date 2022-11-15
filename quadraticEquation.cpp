#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        vector<int> quadraticRoots(int a, int b, int c){
            int d, x, y;
            vector<int> roots;
            d = (b*b) - (4*a*c);
            if(d<0){
                roots.insert(roots.begin(), -1);
            } else {
                x = floor((-b + sqrt(d))/(2*a));
                y = floor((-b - sqrt(d))/(2*a));
                roots.push_back(max(x, y));
                roots.push_back(min(x,y));
            }
            return roots;
        }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    Solution ob;
    vector<int> roots = ob.quadraticRoots(a, b, c);
    if(roots.size()==1 && roots[0] == -1)
        cout<<"Imaginary"<<endl;
    else
        for(int i=0; i<roots.size(); i++) cout<<roots[i]<<" ";
    // for(auto i=roots.begin(); i!=roots.end(); i++) cout<<*i<<" ";
    cout<<endl;
    return 0;
}
