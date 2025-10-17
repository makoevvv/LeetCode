class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map <int, int> values;

        for (auto i: edges) {
            values[i[0]]++;
            values[i[1]]++;
        }

        for (auto i: values) {
            if (i.second == values.size() - 1) {
                return i.first;
            }
        }
        return -1;
    }
};