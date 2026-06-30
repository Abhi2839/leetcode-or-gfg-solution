class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans = 0, l = 0;
        int arr[3] = {0};

        for (int i = 0; s.length() > i; i++) {
            arr[s[i] - 'a']++;
            // if all the char are present once or morw than
            while(arr[0] and arr[1] and arr[2]) {
                ans += (s.length() - i);
                arr[s[l]-'a']--;
                l++;

                cout<<s[i]<<"";
            }
        }
        return ans;
    }
};