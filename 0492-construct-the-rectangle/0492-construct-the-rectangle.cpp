class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector <int> vec;
        for (int i = int(sqrt(area)) + 1; i >= 1; i--) {
            if (area % i == 0) {
                vec.push_back(area / i);
                vec.push_back(i);
                break;
            }
        }
        if (vec[0] < vec[1]) {
            swap(vec[0], vec[1]);
        }
        return vec;
    }
};