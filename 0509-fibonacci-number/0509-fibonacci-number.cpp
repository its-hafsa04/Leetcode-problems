class Solution {
public:
    int fib(int n) {
       if(n==0 || n==1){
        return n;
       }else if(n<0){
        return 0;
       }
       return (fib(n-1)+fib(n-2));
    }
};