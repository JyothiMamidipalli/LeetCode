class Solution {
public:
    int strStr(string s1, string s2) {
       int n=s1.length();
       if(s1.find(s2)<n) return s1.find(s2);
       return -1; 
    }
};