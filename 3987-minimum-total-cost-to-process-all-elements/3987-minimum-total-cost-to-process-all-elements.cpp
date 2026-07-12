class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long mod=1e9+7;
        long long  res=k,cost=0;
        for (auto x:nums){
            if (x>res){
              long long req=x-res;
               long long t=(req+k-1)/k;
                cost+=t;
                res+=t*k;
            }
            res-=x;
        }
        return (cost%mod)*((cost+1)%mod)%mod *500000004%mod ;
    }
};