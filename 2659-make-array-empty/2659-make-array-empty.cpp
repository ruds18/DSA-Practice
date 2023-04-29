class Solution {
public:
    long long countOperationsToEmptyArray(vector<int>& n) {
    long long res = 0, sz = n.size(), cur = sz;
    vector<int> ids(n.size());
    iota(begin(ids), end(ids), 0);
    sort(begin(ids), end(ids), [&](int i, int j){ return n[i] < n[j]; });
    for (int i = 0; i < sz; cur = ids[i++])
        if (ids[i] < cur)
            res += sz - i;
    return res;
}
};