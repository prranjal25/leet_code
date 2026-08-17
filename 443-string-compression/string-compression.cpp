class Solution {
public:
    int compress(vector<char>& chars) {
       /* vector<char> ans;char po=chars[0]; 
        int n=chars.size();
        int l=1;int h=n-1;
        while(l<=h){
            int count=1;
            while(l<=h && po==chars[l]){
                count++;
                l++;
            }
            ans.push_back(po);
            if(count>1){
            string s=to_string(count);
            for(char c:s){
                ans.push_back(c);
            }
            }
           if(l<=h){
                po=chars[l];
                l++;
            }
        }
        }
         for (int i = 0; i < ans.size(); i++) {
            chars[i] = ans[i];
        }

        return ans.size();
    }
};*/
 vector<char> ans;

        int n = chars.size();
        int l = 0;

        while (l < n) {
            char po = chars[l];
            int count = 0;

            while (l < n && chars[l] == po) {
                count++;
                l++;
            }

            ans.push_back(po);

            if (count > 1) {
                string s = to_string(count);

                for (char c : s) {
                    ans.push_back(c);
                }
            }
        }

        for (int i = 0; i < ans.size(); i++) {
            chars[i] = ans[i];
        }

        return ans.size();
    }
};