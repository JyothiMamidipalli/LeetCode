class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        int c=0;
        for(int i=1;i<=n;i++)
        {
            c+=i;
        }
        int a=0;
        for(int i=0;i<n;i++)
        {
            a += i+1;
            if(c==a)
            {
                return i+1;
            }
            c-=i+1;
        }
        return -1;
    }
};