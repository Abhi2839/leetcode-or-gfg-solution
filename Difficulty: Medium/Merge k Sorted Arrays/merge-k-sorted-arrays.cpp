class Solution {
  public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        // Code here
        vector<int>ans;
        int n=mat.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        for (auto x:mat){
            for (auto y:x)
            pq.push(y);
        }
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};