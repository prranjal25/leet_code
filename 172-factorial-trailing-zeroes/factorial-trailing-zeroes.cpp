class Solution {
public:
    int trailingZeroes(int n) {
        //BRUTE FORCE
       /* if(n==0) return 0;
        long long product=1; int count=0;
        while(n>0){
            product=product *n;
            n--;
        }
        while(product>0){
        int remainder=product%10;
        if(remainder==0)
            count++;
        else 
            break;
        product=product/10;
        }
        return count; */
        int count=0;
        while(n>0){
            n=n/5;
            count =count +n;
        }
        return count;
    }
};