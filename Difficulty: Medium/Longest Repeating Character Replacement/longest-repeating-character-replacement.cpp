class Solution {
  public:
    int longestSubstr(string& s, int k) {
        // code here
        int i=0,len=s.length(),maxfreq=0,le=0;
        unordered_map<char,int>mp;
        for (int j=0;len>j;j++){
            mp[s[j]]++;
            maxfreq=max(maxfreq,mp[s[j]]);
            while((j+1-i)-maxfreq>k){
                mp[s[i++]]--; 
            }
            le=max(le,j+1-i);
            
        }
        return le;
    }
};