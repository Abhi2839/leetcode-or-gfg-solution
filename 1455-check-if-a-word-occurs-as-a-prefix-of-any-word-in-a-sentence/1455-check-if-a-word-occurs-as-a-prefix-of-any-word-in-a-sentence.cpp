class Solution {
public:
    int isPrefixOfWord(string sen, string sw) {
        int len = sw.length();
        int idx = INT_MAX;
        stringstream ss(sen);
        string words;
        vector<string> str;
        while (ss >> words)
            str.push_back(words);

        for (int i = 0; str.size() > i; i++) {
            string x = str[i];
            int cnt = 0;
            if (len > x.length())
                continue;

            for (int j = 0; x.length() > j; j++) {
                if (x[j] == sw[j])
                    cnt++;
                else
                    break;
            }
            if (cnt == len)
                idx = min(idx, i);
        }
        return idx == INT_MAX ? -1 : idx + 1;
    }
};