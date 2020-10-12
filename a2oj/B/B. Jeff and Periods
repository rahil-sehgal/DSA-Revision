// problem link below
// https://codeforces.com/problemset/problem/352/B
  
  #include<bits/stdc++.h>
  using ll=long long;
  using namespace std;

    signed main(){
      int n;
      cin>>n;
      std::map<int, std::vector<int>> mp;

      for(int i=0;i<n;i++){
        int x;
        cin>>x;

        mp[x].push_back(i);
      }
      //wrong statemnt 
    //  for(int i=0;i<n;i++){
      set<pair<int,int>> ans;

      for(auto i:mp){
        if(i.second.size()==1){
          ans.insert(make_pair(i.first,0));
        }
        else if(i.second.size()==2){
          ans.insert(make_pair(i.first,i.second[1]-i.second[0]));
        }
        else{
          int cd=i.second[1]-i.second[0]; //common diff
          bool flag=true;
          for(int j=2;j<i.second.size();j++){
            if(i.second[j]-i.second[j-1]!=cd){
              flag=false;
            }
          }

          if(flag){
            ans.insert(make_pair(i.first,cd));
          }
        }
      }
      
       cout<<ans.size()<<endl;
      for(auto i:ans){
        cout<<i.first<<" "<<i.second<<endl;
      }
    
    return 0;
    }
  
