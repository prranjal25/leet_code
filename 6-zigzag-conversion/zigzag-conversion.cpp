class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.length();
        if(n==1){
            return s;
        }
        if(numRows==1){
            return s;
        }
         string rows[numRows];
         for(int i=0;i<numRows;i++){
            rows[i]="";
         }
         int index=0;
         int i=0;
         int j=0;
         while(index<n){
            while(index<n && i<numRows){
                rows[i].push_back(s[index++]);
                i++;
            }
            i-=2;
            j++;
         while(index<n && i>=0){
rows[i].push_back(s[index++]);
i--;
j++;
         }
         i=1;
         j--;
         }
         string result="";
         for(int i=0;i<numRows;i++){
            result.append(rows[i]);
         }
return result;

    }
};