class Solution {
public:
    string intToRoman(int num) {
        string M[1000]= { "","M" ,"MM", "MMM"};
        string C[1000]=
            { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
        string X[1000]=
            { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
        string I[1000]=
            { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
        return M[num/1000]+ C[(num%1000)/100]+ X[(num%100)/10]+I[num%10];
    }
};