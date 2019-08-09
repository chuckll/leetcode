#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
		int n = numbers.size();
		if(n == 0)
			return 0;
		if(n == 1)
			return numbers[0];
		sort(numbers.begin(),numbers.end());
		int thres = n/2 +1;
		int temp = numbers[thres];
		int forward = thres-1,backward = thres+1;
		int count = 1;
		while(forward>=0)
		{
			if(numbers[forward] == temp)
			{
				count++;
				forward--;
			}else{
				break;
			}
		}
		while(backward<=n-1)
		{
			if(numbers[backward] == temp)
			{
				count++;
				backward++;
			}else{
				break;
			}
		}

		if(count >= thres)
			return temp;
		else
			return 0;

    }
};