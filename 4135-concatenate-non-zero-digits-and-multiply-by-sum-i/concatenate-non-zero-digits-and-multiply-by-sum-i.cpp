class Solution {
public:
    long long sumAndMultiply(int n) {
        int reverse=0;
          while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
        long long x=0;
        long long sum=0;
        while(reverse!=0){
            int remainder=reverse%10;
            reverse=reverse/10;
            if(remainder!=0){
                x=x*10+remainder;
                sum=sum+remainder;
            }
        }
        return sum *x;
    }
};