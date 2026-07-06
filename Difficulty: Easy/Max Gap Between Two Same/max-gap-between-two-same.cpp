class Solution {
  public:
 int maxCharGap(string &s)
{
    vector<int> mp(26, -1);
    int res = -1;

    for (int i = 0; i <s.size(); i++)
    {
        int ch = s[i] - 'a';

        if (mp[ch] == -1)
        {
 mp[ch] = i;
        }
        else
        {
            res = max(res, i - mp[ch] - 1);
        }
    }

    return res;

    }
};