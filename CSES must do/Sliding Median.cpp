    #include<bits/stdc++.h>
    using namespace std;
     
   
    #define debug(val) printf("check%d\n",val)
    #define int long long
    #define mod 1000000007
    #define clr(val) memset(val,0,sizeof(val))
    #define watch(x) cerr << #x << " is " << x << endl;
    #define endl '\n'
    #define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
      const int mx=1e5;
    int32_t main(){
      
      FIO;


      int n;
      cin>>n;
      int k;
      cin>>k;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }

      for(int i=0;i<n-k+1;i++){

        int b[k];
        for(int j=i;j<k+i;j++){
          b[j-i]=a[j];
        }
        sort(b,b+k);
        cout<<b[(k+1)/2 -1]<<" ";

      }

        return 0;
 }
