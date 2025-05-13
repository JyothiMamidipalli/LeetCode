class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>jyo1,jyo2;
        for(char ch:s){
            if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'){
                jyo1[ch]++;
            }
            else{
                jyo2[ch]++;
            }
        }
        int cnt1=0;
        int cnt2=0;
        for(auto it : jyo1){
            cnt1=max(cnt1,it.second);
        }
        for(auto it:jyo2)
        {
            cnt2=max(cnt2,it.second);
        }
        return cnt1+cnt2;
        
    }
};