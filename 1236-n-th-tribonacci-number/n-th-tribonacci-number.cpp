class Solution {
public:
    int tribonacci(int n) {
        if(n==1 or n==2) return 1;
        if(n==0) return 0;
        long long int a=0,b=1,c=1,d=0;
        for(int i=3;i<=n;i++)
        {
            d=0;
            d+=a+b+c;
            //cout<<d<<" ";
            a=b;
            b=c;
            c=d;
        }
        return d;
    }
};