class Solution {
public:
    int numberOfSpecialChars(string word) {
        // 2 freq array  sm cap letter
        // vector<int> sm(26, -1);
        // vector<int> cap(26, -1);

        
        int sm[26], cap[26];
        fill(sm, sm + 26, -1);
        fill(cap, cap + 26, -1);

        for (int i = 0; word.size() > i; i++) {
            if (islower(word[i]))
                sm[word[i] - 'a'] = i;
            else {
                if (cap[word[i] - 'A'] == -1)
                    cap[word[i] - 'A'] = i;
            }
        }
        int cnt = 0;
        for (int i = 0; 26 > i; i++) {
            if (sm[i] != -1 && cap[i] != -1 && cap[i] > sm[i])
                cnt++;
        }
        return cnt;
    }
};