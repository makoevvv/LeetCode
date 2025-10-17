class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector <int> vc(2);
        set <int> st;
        for (auto i : nums) {
            if (st.find(i) != st.end()) {
                vc[0] = i;
            }
            st.insert(i);
        }
        int k = 1;
        for (auto i : st) {
            cout << i << " ";
            if (i != k) {
                vc[1] = k;
                break;
            }
            k++;
        }
        if (vc[1] == 0) {
            if (nums.size() > 2) {
                vc[1] = nums.size();
            } else {
                vc[1] = 3 - vc[0];
            }
        }
        return vc;
    }
};