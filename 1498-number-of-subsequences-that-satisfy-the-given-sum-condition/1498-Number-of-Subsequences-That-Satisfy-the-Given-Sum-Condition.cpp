
class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int ans = 0, minimum = 0, maximum = n - 1;
        int mod = 1e9 + 7;

        if (n == 0) return 0;

        vector<int> pows(n);
        pows[0] = 1;

        for (int i = 1; i < n; i++) {
            pows[i] = 2LL * pows[i - 1] % mod;
        }

        while (minimum <= maximum) {
            if (nums[minimum] + nums[maximum] > target) {
                maximum--;
            } else {
                ans = (ans + pows[maximum - minimum]) % mod;
                minimum++;
            }
        }

        return ans;
    }
};
