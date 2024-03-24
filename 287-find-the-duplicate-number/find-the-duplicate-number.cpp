class Solution {
public:
    int findDuplicate(vector<int>& nums) {\
        ios_base::sync_with_stdio(0);
       unordered_map<int,int> jyo;
        for(auto it : nums){
            jyo[it]++;
            if(jyo[it]>1) return it;
        }
        return -1;
    }
};