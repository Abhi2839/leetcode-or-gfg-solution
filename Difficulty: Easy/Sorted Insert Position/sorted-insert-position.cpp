class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int h=arr.size()-1,l=0;
        while(h>=l){
            int mid =l+(h-l)/2;
            if (arr[mid]>=k) h=mid-1;
            else l=mid+1;
        }
        return l;
    }
};