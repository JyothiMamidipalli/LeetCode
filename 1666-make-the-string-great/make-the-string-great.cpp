class Solution {
public:
    string makeGood(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n=s.length();
        if(n==0 or n==1) return s;
        string temp;
        int i=0;
        int cnt=0;
        while(i<n)
        {
            if(s[i]>='A' and s[i]<='Z' and s[i+1]>='a' and s[i+1]<='z' and s[i]==toupper(s[i+1]))
            {
                i+=2;
                cnt++;
            }
            else if(s[i]>='a' and s[i]<='z' and s[i+1]>='A' and s[i+1]<='Z' and s[i]==tolower(s[i+1]))
            {
                i+=2;
                cnt++;
            }
            else
            {
                temp+=s[i];
                i++;
            }
        }
        if(cnt!=0) return makeGood(temp);
        return temp;
         
    }
};