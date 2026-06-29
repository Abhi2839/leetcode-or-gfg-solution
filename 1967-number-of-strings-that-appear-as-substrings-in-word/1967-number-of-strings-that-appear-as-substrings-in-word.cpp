class Solution {
public:
    int numOfStrings(vector<string>& arr, string word) {
        int cnt=0;
        for (auto x:arr){
            if (word.contains(x)) cnt++;
        }
        return cnt;
    }
};