class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector <int> vc;
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 1) {
                vc.push_back(i);
            }
        }
        if (vc.size() == 0) {
            return (flowerbed.size() + 1) / 2 >= n;
        }
        int pos = 0, cur = 0;
        for (int i = 0; i < vc.size(); i++) {
            if (i == 0) {
                pos += max(0, (vc[i] - cur) / 2);
                cout << max(0, (vc[i] - cur) / 2) << " ";
            } else {
                pos += max(0, (vc[i] - cur - 2) / 2);
                cout << max(0, (vc[i] - cur - 2) / 2) << " ";
            }
            cur = vc[i];
        }
        pos += max(0, int((flowerbed.size() - cur - 1) / 2)); 
        cout << max(0, int((flowerbed.size() - cur - 1) / 2));
        return pos >= n;
    }
};