class Solution {
public:
    int maxDistance(string moves) {
        int dist=0;
        int l=0,r=0,u=0,d=0,b=0;
        for (auto  x:moves){
            if (x=='L') l++;
            else if (x=='R') r++;
            else if (x=='U') u++;
            else if (x=='D') d++;
            else b++;
        }
        return abs(l-r)+abs(d-u)+b;
    }
};