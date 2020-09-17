//Use BACKTRACKING 
//note : ()) cannot be a valid answer so backtrack from there  //two conditions
//closed no of paranthesis should not be more than open no of paranthesis
//close <=open

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
       
        helper(res,"",0,0,n); //start with a blank string ""
        return res;
    }
    void helper(vector<string> &res,string s,int open,int close,int n){
        if(s.length()==(n*2)){
           // res.insert (res.begin(), s);
           res.push_back(s) ;
            return;
        }
        if(open<n){
            helper(res,s+"(",open+1,close,n);
        }
        if(close<open){
            helper (res,s+")",open,close+1,n);
        }
        
    }  
}; 

