class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n=nums.size();
        if(n==1 or n<=k) return n;
        unordered_map<int,int>up;
        int i=0,j=0,maxi=0;
        while(j<n)
        {
            up[nums[j]]++;
            if(up[nums[j]]<=k)
            {
                int a=j-i+1;
                if(maxi<a)
                {
                    maxi=a;
                }
            }
            else
            {
                while(up[nums[j]]>k)
                {
                    up[nums[i]]--;
                    i++;
                }
            }
            j++;
        }
        return maxi;
    }

};