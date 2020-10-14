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
      int n;;
      cin>>n;
      int a[n+1];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      int count =0;
      int ans=-1;
      if(n==1 || n==2){
        cout<<n<<endl;
      }
      else{

      for(int i=0;i<n;i++){

        count=1;
        if(a[i]>=a[i+1] && i<n-1){
          int k=i;
          while(a[k]>=a[k+1] && k<n-1){
            count++;
            k++;
          }
        }


        if(a[i]>=a[i-1] && i>=1){
         int j=i;
          while(a[j]>=a[j-1] && j>=1){
            count++;
            j--;
          }
        }
   // cout<<count<<endl;
    ans=max(ans,count);
    count=1;
  } //end of for loop

  cout<<ans<<endl;
}


  return 0;
}
