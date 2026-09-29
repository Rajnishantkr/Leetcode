class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int count;
        int i =0;
        while(i < s.size())
        {
            if(s[i] == '(')
            {
                count++;
            }
            if(s[i] == ')')
            {
                ans = max(ans,count);
                count--;
            }
            i++;
        }
        return ans;
    }
};