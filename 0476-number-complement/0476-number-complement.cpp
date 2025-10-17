class Solution {
public:
    int findComplement(int num) {
        vector <int> vec;
        while (num != 0) {
            vec.push_back(num % 2);
            num /= 2;
        }
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == 0) {
                vec[i] = 1;
            } else {
                vec[i] = 0;
            }
        }
        for (auto i : vec) {
            cout << i << " ";
        }
        for (int i = vec.size() - 1; i >= 0; i--) {
            if (vec[i] == 1) {
                vec.resize(max(0, i + 1));
                break;
            }
        }
        cout << "|| ";

        for (auto i : vec) {
            cout << i << " ";
        }
        if (vec.size() == 0) {
            return 0;
        } else {
            int ans = 0;
            for (int i = 0; i < vec.size(); i++) {
                ans += vec[i] * pow(2, i);
            }
            return ans;
        }

    }
};