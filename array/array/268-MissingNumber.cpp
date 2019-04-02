#include<stdio.h>
#include<vector>
using namespace std;

//1����1-n������      2��ֱ��ʹ���������
//class Solution {
//public:
//    int missingNumber(vector<int>& nums) {
//        int n = nums.size();
//		int sum = (n+1)*n/2;
//		for(int i = 0; i < nums.size(); i++)
//		{
//			sum -= nums[i];
//		}
//		return sum;
//    }
//};


class Solution {
public:
    int missingNumber(vector<int>& nums) {
		int sum = nums.size();
		for(int i = 0; i < nums.size(); i++)
		{
			sum ^= nums[i];
			sum ^= i;
		}
		return sum;
    }
};