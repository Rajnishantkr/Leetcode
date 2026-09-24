class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n= nums.size();
        int sum=0;
        int i=0;
        
        while(i < n){
            if(nums[i]>9){
                int num= nums[i];

                while(num > 0  ){
                sum+=num % 10;
                num = num /10;
                }
                if(i == sum)
                  return i;
                i++;
                sum=0;
            }
            else
            {
                if(nums[i] == i)
                   return i;
                i++;
            }
        }
        return -1;
    }
};