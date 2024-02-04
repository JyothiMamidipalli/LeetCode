class Solution {
public:
    void fun(vector<int>nums, int start,int end,vector<vector<int>>&jyo)
    {
        if(start >= end)
        {
            //cout<<s<<endl;
            jyo.push_back(nums);
            return;
        }
        for(int i = start ; i <= end ; i++)
        {
            swap(nums[i],nums[start]);
            fun(nums,start+1,end,jyo);
            swap(nums[i],nums[start]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>jyo;
        fun(nums,0,nums.size()-1,jyo);
        return jyo;
    }
};