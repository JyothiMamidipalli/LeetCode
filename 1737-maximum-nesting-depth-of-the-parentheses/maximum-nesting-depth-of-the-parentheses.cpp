class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int cnt=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                cnt++;
                if(cnt>maxi){
                    maxi=cnt;
                }
            }
            else if(s[i]==')'){
                cnt--;
            }
        }
        return maxi;
        
    }
};