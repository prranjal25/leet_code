class Solution {
public:
    bool isValid(string st) {
        stack<char>s;
       for(char c:st){
        if(c=='(' || c=='[' ||c=='{'){ 
            s.push(c);
       }
       else {
        if(s.empty()) return false;
        char ch=s.top();
        if(c==')' &&ch!='(')
        return false;
         if(c==']' &&ch!='[')
        return false;
         if(c=='}' &&ch!='{')
        return false;
        s.pop();
       }
     }
       return s.empty();
    }
};