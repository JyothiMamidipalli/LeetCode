class Solution {
public:
    int getHash(const string &s){
        int h = 0;
        for (char i : s){
            h |= 1<<(i-'a');
        }
        return h;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int hash = ~getHash(allowed);
        int cnt = 0;
        for (string word : words){
            int h = getHash(word);
            if (hash&h) continue;
            cnt++;
        }
        return cnt;
    }
};