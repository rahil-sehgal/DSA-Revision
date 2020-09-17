class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        
        //hash map soln
        unordered_map<int,int> imap;
        vector<int> res;
        for(int i=0;i<a.size();i++){
        if(imap.find(target-a[i])!=imap.end()){
            //we have found it
            res.push_back(imap[target-a[i]]);
            res.push_back(i);
            break;
        }
            //now put that abck in that map 
         //  else imap[a[i]]=i;
            else imap.insert({a[i],i}); // both are correct --> this and above 
            
        }
        return res;
        
        
    }    
    
        
    //SORT ONE DOESN'T WORK    
        
        /*sort(a.begin(),a.end());
            int n=a.size();
        vector<int> res;
        
        int l=0;
        int r=n-1;
        while(l<r){
            if(target == a[l]+a[r]){
                res.push_back(l);
                res.push_back(r);
                break;
                
            }
            else if(target > a[l]+a[r]){
                l++;
            }
            else r--;
            
        }
        return res;
    } */
};
