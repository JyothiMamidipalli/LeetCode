class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>raj;
        int b= binary_search(nums.begin(),nums.end(),target);
        if(b)
        {
            auto low = lower_bound(nums.begin(),nums.end(),target);
            auto upp = upper_bound(nums.begin(),nums.end(),target);
            int l = low-nums.begin();
            int u = upp-nums.begin()-1;
            raj.push_back(l);
            raj.push_back(u); 
        }
        else{
            raj.push_back(-1);
            raj.push_back(-1);
        }
        return raj;
    }
};