class Solution {
public:
    string customSortString(string order, string s) {
        string str="";
        unordered_map<int,int>jyo;
        for(auto it:s)
        {
            jyo[it]++;
        }
        for(auto it:order)
        {
            if(jyo.find(it)!=jyo.end())
            {
                str.append(jyo[it],it);
                jyo.erase(it);
            }
        }
        for(auto it:jyo)
        {
            //cout<<it.second<<" "<<it.first<<endl;
            str.append(it.second,it.first);
        }
        return str;

    }
};