class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        ios_base::sync_with_stdio(0);
        vector<int>jyo(26,0);
        for(auto it:tasks)
        {
            jyo[it-'A']++;
        }
        int a=0;
        int b=1;
        for(int i=0;i<26;i++)
        {
            if(jyo[i]>a)
            {
                a=jyo[i];
                b=1;
            }
            else if(jyo[i]==a)
            {
                b++;
            }
        }
        int c=(n+1)*(a-1)+b;
        return max(c,(int)tasks.size());
    }
};