class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
    vector<int>v = {1,2,3,4,5,6,7,8,9};
    vector<int>ans;
    int temp1 = low,c1 = 0;
    while(temp1 != 0){
        temp1/=10;
        c1++;
    }
    int temp2 = high,c2 = 0;
    while(temp2 != 0){
        temp2/=10;
        c2++;
    }
    int num=0;
    while(c1<=c2){
        int i=0,j=c1;
        while(j<=v.size()){
        num = 0;
        for(int k=i;k<j;k++){
            num = num*10+v[k];
        }
        if(num >= low and num <= high){
            ans.push_back(num);
        }
        i++;
        j++;
        }
        c1++;
    }
    return ans;
        
    }
};