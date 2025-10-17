class Solution {
public:
    
    vector<string> summaryRanges(vector<int>& nums) {
        vector <string> vec; 
        if (nums.size() == 0) {
            return vec;
        }
        map <long long, long long> mp;
        int cur = nums[0];
        for (size_t i = 1; i < nums.size(); i++) {
            long long int a = nums[i];
            long long int b = nums[i - 1];
            if (a - b > 1) {
                mp[cur] = nums[i - 1];
                cur = nums[i];
            }
        }
        mp[cur] = nums[nums.size() - 1];
        for (auto i: mp) {
            string str;
            if (i.first == i.second) {
                str += to_string(i.first);
            } else {
                str += to_string(i.first) + "->" + to_string(i.second);
            }
            vec.push_back(str);
        }

        return vec;
    }
};