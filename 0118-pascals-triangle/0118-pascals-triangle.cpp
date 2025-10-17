class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int> > vec;

        for (int i = 0; i < numRows; i++) {
            vector <int> curVec;
            curVec.push_back(1);
            if (i > 0) {
                for (int j = 1; j < i; j++) {
                    curVec.push_back(vec[i - 1][j] + vec[i - 1][j - 1]);
                }
                curVec.push_back(1);
            }
            vec.push_back(curVec);
        }
        return vec;
    }
};