#include<stdio.h>
#include<vector>
using namespace std;




//����˼·����
//
//1. ���ȹ۲���Ŀ�������������飬�����ѵ��Ƕ�ʱ�临�ӶȺͿռ临�Ӷ���Ҫ��
//
//2. ʱ�临�Ӷ���logn����һ��Ӧ������������
//
//3. �ѵ��ǣ�������������ô�ж������߻����Ұ�ߡ������ʽ��ͨ��mid����ż�ԡ�������ôͨ����ż���жϣ���ͨ����������⡣


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