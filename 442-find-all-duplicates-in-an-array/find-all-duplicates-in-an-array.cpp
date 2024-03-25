class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>jyo;
        map<int,int>raj;
        for(int i=0;i<nums.size();i++)
        {
            raj[nums[i]]++;
        }
        for(auto it:raj)
        {
            if(it.second>1)
            {
                jyo.push_back(it.first);
            }
        }
        return jyo;
    }
};