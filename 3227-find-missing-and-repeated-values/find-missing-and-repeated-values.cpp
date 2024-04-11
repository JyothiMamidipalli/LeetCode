class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int a=grid.size()*grid.size();
        vector<int>jyo(a+1,0);
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid.size();j++)
            {
                jyo[grid[i][j]]++;
            }
        }
        int b,c;
        for(int i=1;i<=a;i++)
        {
            if(jyo[i]==2) 
            {
                b=i;
            }
            if(jyo[i]==0) 
            {
                c=i;
            }
        }
        return {b,c};
    }
};