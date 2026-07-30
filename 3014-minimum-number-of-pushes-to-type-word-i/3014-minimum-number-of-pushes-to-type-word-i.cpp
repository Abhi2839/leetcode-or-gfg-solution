class Solution {
public:
    int minimumPushes(string word) {
        if (8 > word.length())
            return word.length();
        int ans = 0;
        for (int i = 0; word.length() > i; i++)
            ans += (i / 8) + 1;

        return ans;
    }
};