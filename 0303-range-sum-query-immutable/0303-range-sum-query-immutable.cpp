class NumArray {
public:
    vector <int> pref;
    vector <int> postf;
    size_t n;
    NumArray(vector<int>& nums) {
        n = nums.size();
        pref.resize(n);
        int curSum = 0;
        for (size_t i = 0; i < n; i++) {
            curSum += nums[i];
            pref[i] = curSum;
        }
    }
    
    int sumRange(int left, int right) {
        if (left == 0) {
            return pref[right];
        }
        return (pref[right] - pref[left - 1]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */