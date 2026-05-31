class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& arr) {
        sort(arr.begin(), arr.end());

        long long curr = mass;

        for (int asteroid : arr) {
            if (curr < asteroid) {
                return false;
            }

            curr += asteroid;
        }

        return true;
    }
};