public:
vector<int> luckyNumbers (vector<vector<int>>& matrix) {
unordered_map<int,int>rowMin;
unordered_map<int,int>colMax;
vector<int>ans;
for(int i=0; i<matrix.size(); i++){
int mini = INT_MAX;
for(int j=0; j<matrix[0].size(); j++){
mini = min(mini , matrix[i][j]);
}
cout<<i<<" "<<endl;
rowMin[i] = mini;
}
for(int i=0; i<matrix[0].size(); i++){
int maxi = INT_MIN;
for(int j = 0; j<matrix.size(); j++){
maxi = max(maxi , matrix[j][i]);
}
cout<<i<<"->"<<maxi<<" ";
colMax[i] = maxi;
}
for(int i=0; i<rowMin.size() ;i++){
if(rowMin[i] == colMax[i]){
ans.push_back(rowMin[i]);
}
}
return ans;
}
};
​