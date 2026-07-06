class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end(),[](vector<int>&a,vector<int>&b){
            if (a[0]==b[0]) return a[1]>b[1];
            return a[0]<b[0];
        });

        int ans=1;
        int cu=arr[0][1];
        for (int i=0;arr.size()>i;i++){
            if (arr[i][1]>cu){
                ans++;
                cu=arr[i][1];
            }
        }
        return ans;
    }
};