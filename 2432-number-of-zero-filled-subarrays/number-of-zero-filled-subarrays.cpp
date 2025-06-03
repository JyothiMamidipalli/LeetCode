class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
         long long int total_count=0;
        long long int zero_count=0;
        for(long long int num:nums){
            if(num==0){
                zero_count++;
                total_count+=zero_count;
            }
            else{
                zero_count=0;
            }
        }
        return total_count;
        
    }
};