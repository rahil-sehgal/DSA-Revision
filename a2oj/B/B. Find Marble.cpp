#include<bits/stdc++.h>
#include <stdio.h> 
#include<math.h>
using namespace std;
 
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 

 int main() 
{ 
  
  FIO
    
  int n,s,t;
  cin>>n>>s>>t;
  int p[n+1];
  int ans =0;
  //s --> initail pos
  //t --> final pos

  for (int i = 1; i <= n; ++i)
  {
    cin>>p[i];
  }
  
  while(s!=t && p[s]!=0){
    //it is 1 indexing 
    int temp=p[s];
    p[s]=0;
    s=temp;
      ans++;

  }
  if(s==t){
  cout<<ans<<endl;
}
else cout<<-1<<endl;

  return 0;

}
//
