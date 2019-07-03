#include<stdio.h>
#include<math.h>
using namespace std;



class Solution {
public:
    bool judgeSquareSum(int c) {
		long i = 0;
		long j = (int)sqrtf(c);
		while(i <= j)
		{
			long long sum = i*i+j*j;
			if(sum == c)
			{
				return true;
			}else if(sum < c)
			{
				i++;
			}else{
				j--;
			}
		}
		return false;
    }
};