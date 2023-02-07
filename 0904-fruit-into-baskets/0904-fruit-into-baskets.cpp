class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> map;
        int i = 0, j = 0;
        for(i = 0, j = 0; i < fruits.size(); i++) {
            map[fruits[i]]++;
            if(map.size() > 2) {
                map[fruits[j]] -= 1;
                if(map[fruits[j]] == 0) map.erase(fruits[j]);
                j++;
            }
        }
        return i - j;
    }
};