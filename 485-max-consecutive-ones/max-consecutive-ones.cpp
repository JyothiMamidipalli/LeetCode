class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int maxCount=0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                cnt ++;
            } else {
                maxCount = max(maxCount, cnt);
                cnt = 0;
            }
            maxCount = max(maxCount, cnt);
        }
        return maxCount;
        
    }
};