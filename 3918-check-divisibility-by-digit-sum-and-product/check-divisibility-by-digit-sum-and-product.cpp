class Solution {
public:
    bool checkDivisibility(int n) {
        int org=n;
        int sum=0;int product=1;
        while(n!=0){
            int rem=n%10;
             sum=sum+rem;
            product=product*rem;
            n/=10;
        }
        int ans=sum+product;

        return org%ans==0;
    }
};