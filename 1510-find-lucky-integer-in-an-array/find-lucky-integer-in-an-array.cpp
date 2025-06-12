class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>jyo;
        for(int i=0;i<arr.size();i++){
            jyo[arr[i]]++;
        }
        int a=-1;
        for(auto it:jyo){
            if(it.second==it.first){
                a=it.first;
            }
        }
        return a;
        
    }
};