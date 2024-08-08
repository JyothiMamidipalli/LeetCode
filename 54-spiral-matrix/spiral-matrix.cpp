class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>jyo;
        int m=matrix.size(),n=matrix[0].size();
        int dir=0;
        int l=0,r=n-1,t=0,b=m-1;
        while(l<=r and t<=b){
            if(dir==0  and l<=r and t<=b){
                for(int i=l;i<=r;i++){
                    jyo.push_back(matrix[t][i]);
                }
                dir++,t++;
            }
            if(dir==1 and l<=r and t<=b){
                for(int i=t;i<=b;i++){
                    jyo.push_back(matrix[i][r]);
                }
                dir++,r--;
            }
            if(dir==2 and l<=r and t<=b){
                for(int i=r;i>=l;i--){
                    jyo.push_back(matrix[b][i]);
                }
                dir++,b--;
            }
            if(dir==3 and l<=r and t<=b){
                for(int i=b;i>=t;i--){
                    jyo.push_back(matrix[i][l]);
                }
                dir=0,l++;
            }
        }
        return jyo;
    }
};