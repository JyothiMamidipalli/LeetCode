class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.length();
        map<char,int>jyo;
        for(int i=0;i<n;i++){
            jyo[s[i]]++;
        }
        auto it=jyo.begin();
        int a=it->second;
        for(auto it:jyo){
            if(a!=it.second) return false;

        }
        return true;
    }
};