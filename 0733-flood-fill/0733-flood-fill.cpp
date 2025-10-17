class Solution {
public:
    set <pair <int, int> > st;

    void neighbour(vector<vector<int>>& image, int i, int j, int color) {
        if (image[i][j] == color) {
            if (st.find({i, j}) == st.end()) {
                st.insert({i, j});
                if (i - 1 >= 0) {
                    neighbour(image, i - 1, j, color);
                }
                if (i + 1 < image.size()) {
                    neighbour(image, i + 1, j, color);
                }
                if (j - 1 >= 0) {
                    neighbour(image, i, j - 1, color);
                }
                if (j + 1 < image[0].size()) {
                    neighbour(image, i, j + 1, color);
                }
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        neighbour(image, sr, sc, image[sr][sc]);

        for (auto i: st) {
            image[i.first][i.second] = color;
        }
        return image;
    }
};