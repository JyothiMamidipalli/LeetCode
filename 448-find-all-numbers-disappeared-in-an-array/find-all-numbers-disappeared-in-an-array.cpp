class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>jyo(n+1,false);
        for(int num:nums){
            jyo[num]=true;
        }
        vector<int>res;
        for(int i=1;i<=n;i++){
            if(!jyo[i]){
                res.push_back(i);
            }
        }
        return res;
        
        
    }
};