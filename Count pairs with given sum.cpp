class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
       //concept of maps
       unordered_map<int, int> m;
       int cnt=0;
       //traversing the array
       for(int a=0; a<n;a++){
           int b = k-arr[a]; // target-b
           if(m[b]){
               cnt +=m[b];
           }
           m[arr[a]]++;
       }
       return cnt;
    }
};