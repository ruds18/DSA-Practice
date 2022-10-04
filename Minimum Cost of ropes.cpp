class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
      // Min Heap. - O(1) returns minimum element
      priority_queue<long long, vector<long long>, greater<long long>>pq;
      
      for(int i =0;i<n;i++) pq.push(arr[i]);
      
      long long cost =0;
      while(pq.size()>1){
          long long a = pq.top();
          pq.pop();
          
          long long b = pq.top();
          pq.pop();
          
          cost +=a+b;
          pq.push(a+b);
      }
      return cost;
    }
};