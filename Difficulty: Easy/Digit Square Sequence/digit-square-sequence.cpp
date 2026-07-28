class Solution {
  public:
  int num (int a){
      int sum =0;
      while(a>0){
          int r=a%10;
          sum +=r*r;
          a/=10;
      }
      return sum ;
  }
    bool reachesOne(int n) {
        // code here
        int s=n,f=n;
        
        do{
            s=num(s);
            f=num(num(f));
        }
        while(s!=f);
        return s==1;
    }
};