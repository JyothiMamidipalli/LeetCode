class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int miniIndex=-1;
        int maxiIndex=-1;
        for(int i=0;i<n;i++){
            if(nums[i]<mini){
                mini=nums[i];
                miniIndex=i;
            }
            if(nums[i]>maxi){
                maxi=nums[i];
                maxiIndex=i;
            }

        }
        int a=maxiIndex;
        int b=miniIndex;
        int ans=INT_MAX;
        ans=min(ans,max(a,b)+1);
        ans=min(ans,n-min(a,b));

        int ll=min(a,b)+1;
        int rl=n-max(a,b);

        ans=min(ans,(ll+rl));

        return ans;
    }
};