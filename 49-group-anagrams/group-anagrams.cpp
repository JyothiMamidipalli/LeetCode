class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<int>>map;
        vector<string>s=strs;
        for(int i=0;i<strs.size();i++)
        {
            sort(s[i].begin(),s[i].end());
            vector<int>jyo;
            if(map[s[i]].size()==0)
            {
                jyo.push_back(i);
                map[s[i]]=jyo;
            }
            else
            {
                jyo=map[s[i]];
                jyo.push_back(i);
                map[s[i]]=jyo;
            }
        }
        for(auto it:map)
        {
            vector<string>m;
            for(auto i:it.second)
            {
                m.push_back(strs[i]);
            }
            ans.push_back(m);
        }
        return ans;
    }
};