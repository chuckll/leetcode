#include<stdio.h>
using namespace std;



class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
		if(n == 0)
			return 0;
		int count = 0;

		for(int i = 0; i <= n; i++)
		{
			int temp = i;
			while(temp)
			{
				int num = temp%10;
				if(num == 1)
					count++;
				temp = temp/10;
			}
		}

		return count;
    }
};