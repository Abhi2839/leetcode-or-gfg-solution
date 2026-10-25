class Solution {
public:
    int calculateScore(int a, int b) {
       int sa=__builtin_popcount(a);
       int sb=__builtin_popcount(b) ;
       if (sa>=sb) return sa*sb;
       return sb/sa;
    }
};