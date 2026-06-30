class Solution {
  public:
    string maxNumber(vector<int>& arr) {
        // code here.
        // convert into str vector
        int n=arr.size();
        vector<string>st;
        for (auto x:arr) st.push_back(to_string(x));
        
    sort(st.begin(),st.end(),[](string a,string b){
        return a+b>b+a;
    });
    string ans="";
    if (st[0]=="0") return "0";
    for (auto x:st) 
    ans+=x;
     
     return ans;
    }
    
};