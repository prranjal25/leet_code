class Solution {
public:
    string longestPalindrome(string s) {
        /*int n=s.size();string ans="";
        if(n==1) ans=s;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string ch=s.substr(i,j-i-1);
                string temp=ch;
              
               reverse(temp.begin(),temp.end());

                if(ch==temp && ch.size()>ans.size()){
             // if(ch==temp && ch.size()>ans.size()){}
                    ans=ch;
                }
            }

        }
 return ans;*/
 int n=s.size();string ans="";
 for(int i=0;i<n;i++){
    int st=i,end=i;
    while(st>=0&& end <n && s[st]==s[end]){
        st--;
        end++;
    }
    string temp=s.substr(st+1,end-1-st);
    if(temp.size()>ans.size())ans=temp;
    st=i;
    end=i+1;
    while(st>=0 && end<n && s[st]==s[end]){
        st--;
        end++;
    }
    temp=s.substr(st+1,end-st-1);
    if(temp.size()> ans.size()) ans=temp;
 }
 return ans;
    }
};