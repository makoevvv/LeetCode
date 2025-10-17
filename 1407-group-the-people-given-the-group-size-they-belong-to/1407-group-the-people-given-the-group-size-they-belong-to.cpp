class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector <vector <int> > ans;
        map <int, vector <int> > mp;
        for (int i = 0; i < groupSizes.size(); i++) {
            mp[groupSizes[i]].push_back(i);
        }
        for (auto p: mp) {
            vector <int> vc;
            for (auto i: p.second) {
                vc.push_back(i);
                if (vc.size() == p.first) {
                    ans.push_back(vc);
                    vc.clear();
                }
            }
        }
        return ans;
    }
};