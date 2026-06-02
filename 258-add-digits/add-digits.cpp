class Solution {
public:
    int addDigits(int num) {
        // BRUTE FORCE
      /* int sum=0;
        while(num!=0){
            int rem=num%10;
            sum=sum +rem;
            num=num/10;
       } if(sum>=10){
            return addDigits(sum);
        }
        
        return sum; */

        if(num==0) return 0;
        return 1+(num - 1)%9;  //FORMULA USED  
    }
};