class Solution {
public:
    set < vector <int> > combinations;

    void findCombination (int target, const vector<int>& candidates, vector<int> curCombination) {
        if (target == 0) {
            sort(curCombination.begin(), curCombination.end());
            combinations.insert(curCombination);
        } else if (target > 0) {
            for (auto candidate : candidates) {
                curCombination.push_back(candidate);
                findCombination(target - candidate, candidates, curCombination);
                curCombination.resize(max(0, int(curCombination.size() - 1)));
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        findCombination(target, candidates, vector<int>());
        for (auto i : combinations) {
            result.push_back(i);
        }
        return result;
    }
};