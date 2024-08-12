class KthLargest {
public:
    int K=-1;
    multiset<int>jyo;
    KthLargest(int k, vector<int>& nums) {
        for(auto it:nums){
            jyo.insert(it);
        }
        K=k;
    }
    
    int add(int val) {
        jyo.insert(val);
        auto it = next(jyo.rbegin(),K-1);
        return *it;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */