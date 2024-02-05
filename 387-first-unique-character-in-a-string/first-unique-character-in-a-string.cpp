class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>jyo;
        for(int i = 0 ; i<s.length();i++)
        {
            jyo[s[i]]++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(jyo[s[i]]==1) return i;
        }
        return -1;
    }
};