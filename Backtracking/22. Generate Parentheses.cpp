//Use BACKTRACKING 
//note : ()) cannot be a valid answer so backtrack from there  //close more than open 
//closed no of paranthesis should not be more than open no of paranthesis
//close <=open

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        helper(res,"",0,0,n); //start with a blank string ""
        return helper;
    }
    void helper(vector<string> res,){
        
    }
};
