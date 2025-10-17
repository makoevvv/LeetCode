class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string a = "qwertyuiop";
        string b = "asdfghjkl";
        string c = "zxcvbnm";
        vector <string> vec;
        for (auto cur : words) {
            int A = 0, B = 0, C = 0;
            for (auto i : cur) {
                if (a.find(tolower(i)) != string::npos) {
                    A = 1;
                } else if (b.find(tolower(i)) != string::npos) {
                    B = 1;
                } else if (c.find(tolower(i)) != string::npos) {
                    C = 1;
                }
            }
            cout << A << " " << B << " " << C << " || ";
            if (A + B + C == 1) {
                vec.push_back(cur);
            } 
        }
        return vec;

    }
};