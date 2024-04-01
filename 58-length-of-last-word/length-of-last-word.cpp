class Solution {
public:
    int lengthOfLastWord(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int size=s.size()-1;
        int x=0;

        while(size>=0)
        {
            if(isalpha(s[size]))
            {
                x++;
                size--;
            }
            else
            {
                if(x != 0)
                break;
                else
                size--;
            }
        }
        return x;

    }
};