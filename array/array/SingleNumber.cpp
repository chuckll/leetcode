//#include<vector>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//
//
//
//
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//		sort(nums.begin(),nums.end());
//		for(int i = 0; i < nums.size(); i = i+2)
//		{
//			if(nums[i] != nums[i+1])
//			{
//				return nums[i];
//			}
//		}
//    }
//};
//
//
////二进制异或方法
// int singleNumber(vector<int>& nums) {
//        int ret = nums[0];
//        
//        for(int i=1; i<nums.size(); i++){
//            ret ^= nums[i];
//        }
//        
//        return ret;
//    }