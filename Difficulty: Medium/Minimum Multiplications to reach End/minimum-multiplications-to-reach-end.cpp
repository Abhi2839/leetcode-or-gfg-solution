class Solution {
  public:
    int minSteps(vector<int>& arr, int start, int end) {
        // code here// base case 
        if (start==end) return 0;
        int n=arr.size();
        queue<pair<int,int>>qu;
        qu.push({start,0});
        vector<int>dist(1000,1e9);
        dist[start]=0;
        
        while(!qu.empty()){
            auto [num,step]=qu.front();
            qu.pop();
            for (int i=0;n>i;i++){
                int nu=num*arr[i]%1000;
                if (step+1<dist[nu]){
                    dist[nu]=step+1;
                    if (nu==end) return step+1;
                    qu.push({nu,step+1});
                }
            }
        }
        return -1;
    }
};