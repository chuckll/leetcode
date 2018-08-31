class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        vector<int> result;
        int mid;
        while(left <= right)
        {
            mid = (left + right) / 2;
            if(nums[mid] < target)
            {
                left = mid + 1;
            }else if(nums[mid] > target)
            {
                right = mid - 1;
            }else
            {
                  break;        
            }
        }
        
        if(left > right)
        {
            result.push_back(-1);
            result.push_back(-1);
        }else
        {
             int i = mid;
             while( i >= 0)
             {
                 i--;
                 if(nums[i] != target)
                 {
                     break;
                 }
             }
            result.push_back(i+1);
            int j = mid;
            while( j < nums.size())
            {
                j++;
                if(nums[j] != target)
                {
                    break;
                }
            }
            result.push_back(j-1);
        }
        return result;
    }
};