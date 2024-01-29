class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>s;
        for(auto it:arr)
        {
            s.insert(it);
        }
        unordered_map<int,int>jyo;
        int ind=1;
        for(auto  it:s)
        {
            jyo.insert({it,ind});
            ind++;
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=jyo[arr[i]];
        }
        return arr;
    }
};