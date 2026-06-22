class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int frq[26] = {0};
        for (auto ch : text)
            frq[ch - 'a']++;
        return min({frq[0], frq[1], frq['l' - 'a'] >> 1, frq['o' - 'a'] >> 1,
                    frq['n' - 'a']});
    }
};