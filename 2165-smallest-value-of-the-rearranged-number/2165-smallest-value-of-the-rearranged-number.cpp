class Solution {
public:
    long long smallestNumber(long long num) {

        // sort it

        // contain the ends zero if neg then just the change the sign to
        // postitve and return the largest num with -neg sign

        string s = to_string(num);
        if (num > 0) {
            sort(s.begin(), s.end());
            if (s[0] == '0') {
                int i = 0;
                while (s.size() > i and s[i] == '0')
                    i++;
                swap(s[i], s[0]);
            }
            return stoll(s);
        } else {
            sort(s.rbegin(), s.rend());
            return -stoll(s);
        }
    }
};