class Solution {
public:
    int passwordStrength(string password) {
        int points = 0;
        unordered_set<char> st;
        for (auto x : password)
            st.insert(x);

        for (auto x : st) {
            if (x >= 'a' and x <= 'z')
                points += 1;
            else if (x >= 'A' and x <= 'Z')
                points += 2;
            else if (x >= '0' and x <= '9')
                points += 3;
            else
                points += 5;
        }
        return points;
    }
};