class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set <long long> st;
        for (auto i: nums) {
            st.insert((long long)i * (-1));
        }
        vector <long long> vec;
        for (auto i : st) {
            vec.push_back(i * (-1));
        }
        if (vec.size() >= 3) {
            return vec[2];
        }
        return vec[0];
    }
};