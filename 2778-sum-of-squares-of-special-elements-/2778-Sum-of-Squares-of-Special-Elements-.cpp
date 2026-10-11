class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans=0;
        int n= nums.size();
        int idx=1;

        while(idx <= n)
        {
            if(n % idx == 0)
            {
                ans= ans + (nums[idx-1]*nums[idx-1]);
            }
            idx++;
        }
        return ans;
    }
};