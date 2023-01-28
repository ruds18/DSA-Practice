class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int N = edges.size()+1;
        vector<int> count(N + 1, 0);
        for (auto& t : edges)
            count[t[0]]++, count[t[1]]++;
        for (int i = 1; i <= N; ++i) {
            if (count[i] == N - 1) return i;
        }
        return -1;
    }
};