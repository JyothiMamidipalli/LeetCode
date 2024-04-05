class Solution {
public:
    bool jyo(char ch1,char ch2)
    {
        if(ch1>='a' and ch1<='z')
        {
            ch1=char(int(ch1)-int('a')+int('A'));
        }
        else
        {
            ch1=char(int(ch1)-int('A')+int('a'));
        }
        return ch1==ch2;
    }
    string makeGood(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n=s.length();
        if(n==0 or n==1) return s;
        int cnt=0;
        int i=0;
        stack<char>j;
        while(i<n)
        {
            if(j.empty())
            {
                j.push(s[i]);
            }
            else if(jyo(j.top(),s[i]))
            {
                j.pop();
            }
            else
            {
                j.push(s[i]);
            }
            i++;
        }
        string raj;
        while(!j.empty())
        {
            raj+=j.top();
            j.pop();
        }
        reverse(raj.begin(),raj.end());
        return raj;
         
    }
};