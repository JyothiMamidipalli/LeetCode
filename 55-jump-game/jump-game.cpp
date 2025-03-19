class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n=nums.size();
        if(n==1) return true;
        int current=nums[0];
        for(int i=1;i<=current;i++){
            if(i==n-1) return true;
            current=max(current,nums[i]+i);
        }
        return false;
    }
};