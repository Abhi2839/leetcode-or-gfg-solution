class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int area=0;
        stack<int>st;
arr.push_back(-1);

for (int i=0;arr.size()>i;i++){
    while(!st.empty() and arr[st.top()]>arr[i]){
        int h=arr[st.top()];
        st.pop();
        int w=st.empty()?i:i-1-st.top();
        area=max(area,h*w);
    }
    st.push(i);
}
return area;
    }
};