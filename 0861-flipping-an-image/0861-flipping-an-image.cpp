class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < (n + 1) / 2; j++) {
                int a = image[i][j];
                image[i][j] = image[i][n - j - 1] ? 0 : 1;
                //if (!(n % 2)) {
                image[i][n - j - 1] = a ? 0 : 1;
                //}
            }
        }
        return image;
    }
};