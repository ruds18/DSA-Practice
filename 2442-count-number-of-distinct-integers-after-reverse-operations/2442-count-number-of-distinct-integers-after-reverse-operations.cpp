class Solution {
public:
   int reverse(int n){
    int val = 0;
    while (n){
        val = val *10 + (n % 10);
        n /= 10;
    }
    return val;
}

int countDistinctIntegers(vector<int> &nums) {
    unordered_set<int> st;
    for (int i: nums){
        st.insert(i);
        st.insert(reverse(i));
    }
    return st.size();
}
};