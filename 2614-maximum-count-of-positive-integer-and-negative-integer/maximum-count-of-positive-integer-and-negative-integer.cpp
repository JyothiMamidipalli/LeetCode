class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cnt1=0,cnt2=0,cnt3=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                cnt1++;
            }
            else if(nums[i]==0){
                cnt2++;
            }
            else{
                cnt3++;
            }

            
        }
        return max(cnt1,cnt3);
        
    }
};