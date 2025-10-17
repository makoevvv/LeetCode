#include <algorithm>


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector <int> x = nums, ans;
        sort(x.begin(), x.end());
        int l = 0, r = nums.size() - 1;
        while (l != r) 
        {
            int sum = x[l] + x[r];
            if (sum < target)
            {
                l++;
            }
            else if (sum > target)
            {
                r--;
            }
            else
            {
                bool a = true, b = true; 
                for (int i = 0; i < nums.size(); i++) {
                    if (a && x[l] == nums[i]) 
                    {
                        ans.push_back(i); 
                        a = false;
                    }
                    else if (b && x[r] == nums[i]) 
                    {
                        ans.push_back(i);
                        b = false;
                    }
                }
                sort(ans.begin(), ans.end());
                break;
            }
        }
        return ans;
    }
};