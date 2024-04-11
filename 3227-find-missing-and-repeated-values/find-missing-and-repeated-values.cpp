class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        vector<int>jyo;
        map<int,int>raj;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid.size();j++)
            {
                raj[grid[i][j]]++;
            }
        }
        for(auto it:raj)
        {
            if(it.second==2) jyo.push_back(it.first);
        }
        int n=grid.size()*grid.size();
        for(int i=1;i<=n;i++)
        {
            if(raj[i]==0) jyo.push_back(i);
        }
        return jyo;
    }
};