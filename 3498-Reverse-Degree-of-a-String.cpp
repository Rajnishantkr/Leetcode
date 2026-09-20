class Solution {
public:
    int reverseDegree(string s) {
        int res=0;
        int i=1;
        while(i <= s.size())
        {
            res+= (26 - (s[i-1] -'a'))*i;
            i++;
        }
        return res;
    }
};