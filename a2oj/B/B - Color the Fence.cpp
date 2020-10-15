#include<bits/stdc++.h>
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
 
 int main(){
  string ans="";
      
  ll v;
  ll a[10];
  cin>>v;
  ll mn=(int)1e7;
     int index=0;
  for(int i=1;i<=9;i++){
    cin>>a[i];
    if(mn>=a[i]){
      mn=a[i];
      index=i;
    }
  }
  //we can get the max index by this method 
//cout<<mn<<" "<<index<<endl;

  int len=v/mn;
  ll p=v%mn;
  //cout<<p;
  if(v<mn){
    cout<<"-1"<<endl;
  }
  else if(p==0){
    for(int j=0;j<len;j++){
      cout<<index;
    }
  }
  else{
      
      
    ll x=p+mn;
    //ll z=0;
    for(int j=9;j>=index+1;j--){
      if(x>=a[j]){
       // z=j;
         //below line will give WA <-----------IMP point to note------->
          //while(x>=a[j] && j>=index+1){
          //corrected one below
          
         while(p+mn>=a[j] && j>=index+1){
        ans+=to_string(j);
        len--;
      // j--;
          p-=(a[j]-mn); //check again      
      }
      }
    }
 

  cout<<ans;
    // if(z==0){
    //   //matlab kuch bhi nhi mila then
    //   for(int k=0;k<len;k++){
    //     cout<<index;
    //   }
    // }
    //   else{
       // cout<<z;
        for(int k=0;k<len;k++){
          cout<<index;
        }
   //   }
    
 
  }
 
 
 
 
 
  return 0;
}
