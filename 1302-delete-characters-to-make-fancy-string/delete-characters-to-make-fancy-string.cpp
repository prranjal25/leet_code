class Solution {
public:
    string makeFancyString(string s) {
     /*  int n=s.length();
        char temp=s[0];
      int l=0;int h=n-1;
      while(l<=h){
        if(temp==s[l+1]&&temp==s[n-h+l]){
            s[l+1]=s[n-h+l];
        }else{
            temp=s[l+1];
        }
      }
        return s;
    }
};*/

       string ans;
        for(char c:s) {
            if (ans.size() >= 2 &&ans.back()==c&& ans[ans.size() - 2] ==c) {
                continue;
            }
            ans.push_back(c);
        }
      return ans;
    }
};