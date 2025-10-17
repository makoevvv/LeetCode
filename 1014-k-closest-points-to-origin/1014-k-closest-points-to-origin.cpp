class Solution {
public:

    static bool cmp(vector<int> a, vector<int> b) {
        return (pow(a[0], 2) + pow(a[1], 2)) < (pow(b[0], 2) + pow(b[1], 2));
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(), points.end(), cmp);

        vector<vector<int>> ans;
        for (auto i: points) {
            if (k > 0) {
                k--;
                vector <int> vc;
                vc.push_back(i[0]);
                vc.push_back(i[1]);
                ans.push_back(vc);
            } else {
                break;
            }
        }
        return ans;
    }
};