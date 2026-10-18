class Solution {
public:
    bool palindrome(string &s, int left, int right){
       
       while(left < right)
       {
        if(s[left] == s[right]){
            left++;
            right--;
        }
        else {
            return false;
        }
       }
        return true;
    }

   
    void partition(string &s,int idx,vector<vector<string>>& ans,vector<string>& comb ) {
        if( idx == s.length()) {
            ans.push_back(comb);
            return;
        }

        for(int i=idx; i<s.length(); i++)
        {
            if(palindrome(s, idx, i)){
                comb.push_back(s.substr(idx, i-idx+1));

                partition(s,i + 1, ans, comb);

                comb.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string> comb;

        partition(s,0,ans,comb);

        return ans;
    }
};