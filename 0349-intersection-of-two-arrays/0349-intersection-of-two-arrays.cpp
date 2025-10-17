class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        unordered_set <int> a, b;
        for (int i = 0; i < nums1.size(); i++) {
            a.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            b.insert(nums2[i]);
        }
        for (auto i: a) {
            if (b.find(i) != b.end()) {
                ans.push_back(i);
            }
        }
        


        return ans;
    }
};