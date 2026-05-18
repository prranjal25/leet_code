class Solution {
public:
    int romanToInt(string s) {
        int hash[26]={0};   //USING hash array;/ first we assign all the values to 0// then  arranging all the values as per requirement
        hash['I'-'A']=1;
        hash['V'-'A']=5; //assigning the value here
        hash['X'-'A']=10;
        hash['L'-'A']=50;
        hash['C'-'A']=100;
        hash['D'-'A']=500;
        hash['M'-'A']=1000;
    int n=s.length();int sum=0;
        for(int i=0;i<n;i++){
            if(i<n-1 && hash[s[i]-'A']< hash[s[i+1]-'A']){
                sum=sum-hash[s[i]-'A'];  //
            }
                else{
                    sum=sum+hash[s[i]-'A']; //at i=0,s[i]=I;; and hash[I-A]=1; then sum = 1+1+1
                }
            }
            return sum;
        }
};