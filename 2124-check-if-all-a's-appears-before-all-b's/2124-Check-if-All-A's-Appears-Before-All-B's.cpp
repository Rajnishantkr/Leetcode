class Solution {
public:
    bool checkString(string s) {
        int i=0;
        int first;
        int second;
        int n = s.size();

        while(i <n)
        {
            first=s[i+1];
            second = s[i];
            if( second == 'b' && first == 'a')
               return false;
            i++;
        }
        return true;
    }
};