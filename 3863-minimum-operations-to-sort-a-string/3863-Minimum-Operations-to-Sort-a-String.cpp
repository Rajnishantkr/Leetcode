class Solution {
public:
    int minOperations(string s) {
      bool checkSorted = true;

      for(int i=1; i<s.size(); i++)
      {
        if(s[i-1] > s[i])
           checkSorted = false;
      }

      if(checkSorted) 
         return 0;
      if(s.size() == 2) 
         return -1;

      char mini = 'z';
      char maxi = 'a';

      for(int i = 0; i < s.size(); i++) {
            maxi = max(maxi, s[i]);
            mini = min(mini, s[i]);
         } 

         if (s[0] == mini || s[s.size() - 1] == maxi) {
            return 1;
        }
        for (int i = 1; i < s.size() - 1; i++) {
            if (s[i] == mini || s[i] == maxi) {
                return 2;
            }
        }
        return 3;
    }
};