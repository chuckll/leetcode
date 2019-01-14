#include<stdio.h>
#include<vector>
using namespace std;




//解题思路——
//
//1. 首先观察题目，这是有序数组，而且难点是对时间复杂度和空间复杂度有要求。
//
//2. 时间复杂度是logn，第一反应，二分搜索。
//
//3. 难点是，二分搜索后怎么判断是左半边还是右半边。解决方式是通过mid的奇偶性。具体怎么通过奇偶性判断，请通过代码来理解。


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
		int right = nums.size() - 1;
		int mid;
		while(left < right)
		{
			mid = (left + right) / 2;
			if(nums[mid] == nums[mid - 1])
			{
				if(mid / 2 == 0)
				{
					right = mid - 2;

				}else
				{
					left = mid + 1;
				}
			}else if(nums[mid] == nums[mid + 1])
			{
				if(mid / 2 == 0)
				{
					left = mid + 2;

				}else{

					right = mid - 1;
				}
			}else
				return nums[mid];
		}
		return nums[left];
    }
};