class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> mp;
        int n=A.size();
        int cnt=0;
        vector<int>ans(n);
        for(int i=0;i<A.size();i++)
        {
            if(A[i]==B[i]){
                mp[A[i]]+=2;
                cnt++;
            }
            else{
                mp[A[i]]++;
                mp[B[i]]++;
                if(mp[A[i]]==2){cnt++;}
                if(mp[B[i]]==2){cnt++;}
            }
            ans[i]=cnt;
        }
        return ans;
    }
};