class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>jyo(n,vector<int>(n,0));
        int dir=0;
        int l=0,r=n-1,t=0,b=n-1;
        int val=1;
        while(l<=r and t<=b){
            if(dir==0  and l<=r and t<=b){
                for(int i=l;i<=r;i++){
                    jyo[t][i]=val;
                    val++;
                }
                dir++,t++;
            }
            if(dir==1 and l<=r and t<=b){
                for(int i=t;i<=b;i++){
                    jyo[i][r]=val;
                    val++;
                }
                dir++,r--;
            }
            if(dir==2 and l<=r and t<=b){
                for(int i=r;i>=l;i--){
                   jyo[b][i]=val;
                   val++;
                }
                dir++,b--;
            }
            if(dir==3 and l<=r and t<=b){
                for(int i=b;i>=t;i--){
                    jyo[i][l]=val;
                    val++;
                }
                dir=0,l++;
            }
        }
        return jyo;
    }
};