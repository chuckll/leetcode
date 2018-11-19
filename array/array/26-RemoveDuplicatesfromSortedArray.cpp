//#include<vector>
//
//using namespace std;
//
//
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        if(nums.size() > 0)
//        {
//        int result = 1;
//        for(int i = 1; i < nums.size(); i++)
//        {
//            
//         if(nums[i] == nums[result-1] ) 
//             continue;
//            else{
//                nums[result] = nums[i];
//                result++;
//            }
//        }
//        return result;
//        }
//        else{
//            return 0;
//        }
//    }
//};