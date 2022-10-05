class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
      priority_queue<long long, vector<long long>, greater<long long>> pq;
      for(int i = 0;i<n;i++){
          pq.push(arr[i]);
      }
      
      long long ans = 0;
      while(!pq.empty()){
         long long top = pq.top();
          pq.pop();
         
          if(pq.empty()) break;
          long long top2 = pq.top();
          pq.pop();
          ans += (top+top2);
          pq.push(top+top2);
      }
      return ans;
    }
};
