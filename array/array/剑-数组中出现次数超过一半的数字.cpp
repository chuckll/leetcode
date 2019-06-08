#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
		int res,n = numbers.size(),count = 1;
		sort(numbers.begin(),numbers.end());
		int num = n / 2;
		res = numbers[num];
		for(int i = num+1; i < n; i++)
		{
			if(numbers[i] == res)
				count++;
			else
				break;
		}
		for(int i = num-1; i >= 0; i--)
		{
			if(numbers[i] == res)
				count++;
			else
				break;
		}
		if(count > num)
			return res;
		else 
			return 0;
    }
};