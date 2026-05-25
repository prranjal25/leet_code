class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left =0;int right =s.size()-1;
        while(left<right){
            if(!((s[left]>='A'&& s[left]<='Z')|| (s[left]>='a'&& s[left]<='z'))){
            left++;
        }else if(!((s[right]>='A'&& s[right]<='Z')|| (s[right]>='a'&& s[right]<='z'))){
            right--;
        }else{
            swap(s[left],s[right]);
            left ++;
            right--;
        }}
        return s;
    }
};