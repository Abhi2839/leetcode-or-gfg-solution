class Solution {
public:
    int countTriples(int n) {
        int cnt=0;
        for(int i=1;n>=i;i++){
            for (int j=1;n>=j;j++){
                int numm =i*i+j*j;
                int sqrtv=sqrt(numm);
                if (sqrtv*sqrtv==numm and n>=sqrtv) cnt++;
            }
        }
        return cnt;
    }
};