class Solution {
public:
    int secondsBetweenTimes(string s, string e) {
        int h=stoi(s.substr(0,2));
        int m=stoi(s.substr(3,2));
        int ss=stoi(s.substr(6,2));

         int h1=stoi(e.substr(0,2));
        int m1=stoi(e.substr(3,2));
        int ss1=stoi(e.substr(6,2));

        int ans= (h1-h)*3600+(m1-m)*60+ss1-ss;

        return ans;
    }
};