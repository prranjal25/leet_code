class Solution {
public:
    int smallestNumber(int n, int t) {
        int k; int num1;int num2=n;int l=1;int product=1;
        while(num2!=0){
             num1=num2%10;
             product=num1*product;
            num2=num2/10;
        }
        if(product%t==0) {return n;
        }else
        { return smallestNumber( n+1,t);
        }
        
    }
};