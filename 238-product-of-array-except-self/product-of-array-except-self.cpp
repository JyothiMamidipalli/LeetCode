class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       // vector<int>jyo;
        int a=1,b=1;
        int n=nums.size();
        vector<int>jyo(n+2,1);
        vector<int>raj(n+2,1);
        for(int i=0;i<n;i++)
        {
            a*=nums[i];
            jyo[i+1]=a;
        }
        for(int i=n-1;i>=0;i--)
        {
            b*=nums[i];
            raj[i+1]=b;
        }
        for(int i=1;i<=n;i++)
        {
            nums[i-1]=jyo[i-1]*raj[i+1];
        }
        return nums;
    }
};