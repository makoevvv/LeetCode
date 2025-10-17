class Solution {
public:
    vector <bool> visited;
    unordered_map <int, vector <int> > graph;
    bool dfs(int from, int to) {
        visited[from] = true;
        bool ans = false;
        if (from == to) {
            ans = true;
        } else {
            for (auto i: graph[from]) {
                if (!visited[i]) {
                    ans = dfs(i, to);
                    if (ans) {
                        break;
                    } 
                }
            }
        }
        return ans;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        visited.resize(n);
        for (auto i: edges) {
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
        }
        return dfs(source, destination);
    }
};