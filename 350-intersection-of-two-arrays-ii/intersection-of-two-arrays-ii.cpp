class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>jyo(1001),raj(1001);
        vector<int>rj;
        for(auto it:nums1) jyo[it]++;
        for(auto it:nums2) raj[it]++;
        for(int i=0;i<=1000;i++)
        {
            if(jyo[i]!=0 and raj[i]!=0)
            {
                int j=min(raj[i],jyo[i]);
                while(j--)
                {
                    rj.push_back(i);
                }
            }
        }
        return rj;
    }
};