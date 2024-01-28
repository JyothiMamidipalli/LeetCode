class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>jyo(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    jyo[i][j] = 1+jyo[i-1][j-1];
                }
                else
                {
                    jyo[i][j] = max(jyo[i-1][j],jyo[i][j-1]);
                }
            }
        }
        return jyo[n][m];
    }
};