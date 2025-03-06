class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ab=n*m;
        int ac=(ab*(ab+1))/2;
        map<int,int>jyo;
       for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                jyo[grid[i][j]]++;
            }
        }    
        
        vector<int>jyo1;    
        for(auto it:jyo){
            if(it.second==2) {
                jyo1.push_back(it.first);
            }
        }
        int sum=0;
        for(auto it:jyo){
            sum+=it.first;
        }
        int aab=ac-sum;
        jyo1.push_back(aab);
        return jyo1;
    }
};