class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        
        int n=a.size();
        vector<int> res;
        
        int l=0;
        int r=n-1;
        while(l<r){
            if(target == a[l]+a[r]){
                res.push_back(++l);
                res.push_back(++r);
                break;
                
            }
            else if(target > a[l]+a[r]){
                l++;
            }
            else r--;
            
        }
        return res;
    }
};

//
/*class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size() - 1;
        vector<int> res;
        while(i < j){
            if(numbers[i] + numbers[j] == target){
                res.push_back(++i);
                res.push_back(++j);
                break;
            }else if(numbers[i] + numbers[j] > target){
                j--;
            }else{
                i++;
            }
        }
        return res;
    }
};
*/
