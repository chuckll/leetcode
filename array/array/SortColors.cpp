class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size() > 1)
        {
          for(int i = 1; i < nums.size(); i++)
          {
            int j;
            for(j = 0; j < i; j++)
            {
                if(nums[j] > nums[i])
                {
                    break;
                }
            }
            if(j != i)
            {
               int flag = nums[i];
               for(int k = i; k > j; k--)
               {
                   nums[k] = nums[k-1];
               }
                nums[j] = flag;
            }
            
          }
        }
    }
};