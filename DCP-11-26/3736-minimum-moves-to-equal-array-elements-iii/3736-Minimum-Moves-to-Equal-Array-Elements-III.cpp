class Solution {
public:
    int minMoves(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n= nums.size();
       int maxi=nums[n-1];
       int step=0;

       for(int i=0; i< n; i++){
       while(nums[i]<maxi)
       {
        step++;
        nums[i]=nums[i]+1;
       }
       }
       return step;
    }
};