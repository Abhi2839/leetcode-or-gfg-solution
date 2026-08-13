class Solution {
public:
int cnt =0;
void c(int a){
    int b=a;
    while(a>0){
        int r=a%10;
        if (b%r==0) cnt++;
        a/=10;
    }
}
    int countDigits(int num) {
        c(num);
        return cnt;
    }
};