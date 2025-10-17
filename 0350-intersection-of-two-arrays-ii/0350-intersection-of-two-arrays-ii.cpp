class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;

        unordered_map <int, int> a, b;

        for (int i = 0; i < nums1.size(); i++) {
            a[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            b[nums2[i]]++;
        }
        
        for (auto i: a) {
            if (b.find(i.first) != b.end()) {
                int t = min(i.second, b[i.first]);
                for (int j = 0; j < t; j++) {
                    ans.push_back(i.first);
                }
            }
        }
        return ans;
    }
};