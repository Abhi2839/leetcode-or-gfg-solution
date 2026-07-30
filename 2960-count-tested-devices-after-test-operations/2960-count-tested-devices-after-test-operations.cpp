class Solution {
public:
    int countTestedDevices(vector<int>&arr) {
        int cnt =0;
        for (auto x:arr) 
        if (x-cnt>0) cnt++;
        return cnt;
    }
};