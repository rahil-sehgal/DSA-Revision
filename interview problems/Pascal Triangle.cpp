/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<math.h>
#include<vector>

using namespace std;

typedef long long ll;


    ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }
    else return gcd(b,a%b);
}

ll nCr(ll n,ll r){
    if(n-r<r){
        r=n-r;
    }
    
    ll a=1,b=1;
    if(r==0){
        return 1;
        
    }
    else {
        while(r>0){
            a=a*n;
            b=b*r;
            
            ll g=gcd(a,b);
            
            a=a/g;
            b=b/g;
            
            n--;
            r--;
        }
        return a;
    }
}

    vector<vector<int>> generate(int n) {
        
         vector<vector<int>> res;
        for(int i=1;i<=n;i++){
            vector<int> v;
            for(int j=0;j<=i-1;i++){
                v.push_back(nCr(i-1,j));
            }
            res.push_back(v);
        }
        
       // Displaying the 2D vector 
    for (int i = 0; i < res.size(); i++) { 
        for (int j = 0; j < res[i].size(); j++) 
            cout << res[i][j] << " "; 
        cout << endl; 
    } 
    }


int main()
{
    using namespace std;
    cout<<nCr(4,2)<<endl;
    
    generate(5);

    return 0;
}
