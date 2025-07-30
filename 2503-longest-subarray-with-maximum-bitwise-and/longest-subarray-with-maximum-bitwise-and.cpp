class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        int curr=0;
        int maxi1=1;
        for(int  num:nums){
            if(num==maxi){
                curr++;
            }
            else{
                maxi1=max(curr,maxi1);
                curr=0;
            }
        }
        return max(maxi1,curr);
        
    }
};