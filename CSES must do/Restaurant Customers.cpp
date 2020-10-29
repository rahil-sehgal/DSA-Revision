#include<bits/stdc++.h>
using namespace std;


#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long
#define mod 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define watch(x) cerr << #x << " is " << x << endl;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#define cerr if(false)cerr   //use when done with debugging

const int mx = 1e6;

signed main() {
  int n;
  cin >> n;

  //int max1 = -1;
  std::vector<pair<int, int>> v;
  while (n--) {
    int a, b;
    cin >> a >> b;
    v.push_back({a, 1});
    v.push_back({b, -1});
  }
    sort(v.begin(),v.end());
  int ans = -1;
  int c = 0;
  for(auto i:v){
   //   cout<<i.first<<" "<<i.second<<endl;
    if(i.second==1){
      c++;
    }else c--;
    
    ans=max(ans,c);
  }

  cout << ans << endl;
  return 0;
}


/*#include<bits/stdc++.h>
using namespace std;
 
 
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long
#define mod 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define watch(x) cerr << #x << " is " << x << endl;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#define cerr if(false)cerr   //use when done with debugging
 
const int mx = 1e6;
 
signed main() {
  int n;
  cin >> n;
  int x[mx];
  int max1 = -1;
  while (n--) {
    int a, b;
    cin >> a >> b;
    max1 = max(max1, b);
    x[a] = 1;
    x[b] = -1;
  }
 
  int ans = -1;
  for (int i = 0; i <= max1; i++) {
    x[i + 1] += x[i];
    ans = max(ans, x[i]);
  }
  cout << ans << endl;
  return 0;
}
*/
