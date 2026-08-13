class Solution {
public:
int sum(int a){
    int ans=0;
    while(a>0){
        int r=a%10;
        ans+=(r*r);
        a/=10;
    }
    return ans;
}
    bool isHappy(int n) {
     unordered_set<int>st;
     while(n!=1 and st.find(n)==st.end()){
        st.insert(n);
        n=sum(n);
     }
        return n==1;
    }
};