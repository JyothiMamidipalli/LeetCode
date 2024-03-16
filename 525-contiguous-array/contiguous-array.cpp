class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>jyo;
        int max_length=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) sum+=1;
            else sum-=1;
            if(sum==0) max_length=i+1;
            else if(jyo.find(sum)!=jyo.end()) max_length=max(max_length,i-jyo[sum]);
            else jyo[sum]=i;
        }
        return max_length;

    }
};