class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        // code here
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for (int i=0;n-3>i;i++){
            if (i>0 and arr[i]==arr[i-1]) continue;
            for (int j=i+1;n-2>j;j++){
                if (j>i+1 and arr[j]==arr[j-1]) continue;
                int k=j+1,l=n-1;
while(l>k){
    int sum =arr[i]+arr[j]+arr[k]+arr[l];
    if (sum==target) {
        ans.push_back({arr[i],arr[j],arr[k],arr[l]});
        l--;k++;
        while(l>k and arr[k]==arr[k-1]) k++;
        while(l>k and arr[l]==arr[l+1])l--;
    }
    else if (sum>target )l--;
    else k++;
}                
            }
        }
        return ans;
    }
};