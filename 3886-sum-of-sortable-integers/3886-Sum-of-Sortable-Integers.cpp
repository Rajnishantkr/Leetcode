class Solution {
public:

    bool check(vector<int>& nums, int k, int n){

        int prev=0;
       for(int i=0; i < n; i+=k){
        int count =0;
        int mini=nums[i];
        int maxi=nums[i];

        for(int j = i; j<i+k-1; j++){
            if(nums[j] > nums[j +1])
              count++;
            
            mini = min(mini, nums[j + 1]);
            maxi = max(maxi, nums[j+1]);   
        }
           if (nums[i + k - 1] > nums[i])
                count++;

            if (count > 1 || prev > mini )
                return false;

           prev = maxi;
       }
       return true;
    }


    int sortableIntegers(vector<int>& nums) {
        int n= nums.size();
        int res=0;
        for (int k=1; k*k <= n; k++)
        {
            if(n % k == 0) {
                if (check(nums,k,n))
                    res += k;

            if (k * k != n && check(nums, n / k,n))
                    res += n / k;
          }
        }

        return res;
    }
};