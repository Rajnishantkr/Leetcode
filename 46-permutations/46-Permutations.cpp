class Solution {
public:

 void CheckAns(vector<int>& nums, vector<vector<int>>& ans,vector<int>& tempDS,int freq[])
  {
    if(tempDS.size() == nums.size())
    {
       ans.push_back(tempDS);
       return ;
       }

       for(int i=0; i< nums.size(); i++)
       {
        if(freq[i] != 1)
        {
            freq[i]=1;
            tempDS.push_back(nums[i]);

            CheckAns(nums,ans,tempDS,freq);
            freq[i] = 0;
            tempDS.pop_back();
        }
       }
   }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tempDS;
        int freq[nums.size()];
         for(int i=0; i< nums.size(); i++)
           freq[i]=0;
        CheckAns(nums,ans,tempDS,freq);

        return ans;
    }
};