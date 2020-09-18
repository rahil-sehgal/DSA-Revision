class Solution {
public:
    vector<int> shortestToChar(string s, char C) {
        
        
        vector<int> v;
        vector<int> res;
        
        for(int i=0;i<s.length();i++){
            if(s[i]==C){
                v.push_back(i);
            }    
        }
        int min1 =INT_MAX-5;
        
        for(int i=0;i<s.length();i++){
            for(int j=0;j<v.size();j++){
                min1 = min (min1,abs(i-v[j]));
            }
            res.push_back(min1);
            min1=INT_MAX-5;
        }
        
        return res;
    }
};
