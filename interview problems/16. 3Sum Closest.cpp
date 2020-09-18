class Solution {
public:
    int threeSumClosest(vector<int>& a, int target) {
        
        
        int res;
        int closest =INT_MAX ;
        int  n=a.size();
        
        sort(a.begin(),a.end());
            
        for(int i=0;i<n;i++){
            int l=i+1;
            int r=n-1;
            
            while(r>l){
                int sum=a[i]+a[l]+a[r];
                
                if(sum==target){
                  return sum; 
                    break;
                }
                else if(abs(target -sum)<closest){
                    closest=abs(target -sum);
                    res=sum;
                }
                else if(target >sum){
                    l++;
                }
                else r--;
            }
        }
        return res;
    }
};
