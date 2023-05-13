class Solution {
public:
   int maxDistance(vector<int>& cs) {
    int n = cs.size(), i = 0, j = n - 1;
    while (cs[0] == cs[j])
        --j;
    while (cs[n - 1] == cs[i])
        ++i;
    return max(j, n - i - 1);
}
};