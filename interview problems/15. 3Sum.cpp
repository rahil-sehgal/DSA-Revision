class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
       vector<vector<int>> res;
        int n=a.size();
        
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            
        
            int l=0;
            int r=n-1;
        while(r>l){
            int sum=a[i]+a[l]+a[r];
            if(sum==0){
                vector<int> temp;
                temp.push_back(a[i]);
                temp.push_back(a[l]);
                temp.push_back(a[r]);
                
                res.push_back(temp);
            }
            //now to avoid duplication
            while(l<r && a[l]==a[l+1]){
                l++;
            }
            while(r>l && a[r]==a[r-1]){
                r--;
            }
            
        }   //end of while
        while(i<n-1 && a[i]==a[i+1]){
                i++;
            }
            
            
            
        }       // end of for loop
    return res;
    }
};
