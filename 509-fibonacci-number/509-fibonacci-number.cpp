class Solution {
public:
    int fib(int n) {
      int f[n+1];
        if(n<2) return n;
        int a=0,b=1,c;
        while(n-->1){
            c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
};