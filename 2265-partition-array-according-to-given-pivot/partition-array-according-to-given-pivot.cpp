class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>jyo,jyo1,jyo2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                jyo.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                jyo1.push_back(nums[i]);
            }
            else{
                jyo2.push_back(nums[i]);
            }
        }
        jyo.insert(jyo.end(), jyo1.begin(), jyo1.end());
        jyo.insert(jyo.end(), jyo2.begin(), jyo2.end());
        return jyo;
        
    }
};