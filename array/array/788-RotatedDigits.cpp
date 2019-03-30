#include<stdio.h>
using namespace std;





class Solution {
public:
    int rotatedDigits(int N) {
        int count = 0;
		for(int i = 1; i <= N; i++)
		{
			if(isGoodNumber(i) == true)
				count++;
		}
		return count;
    }

	bool isGoodNumber(int n)
	{
		bool result = false;
		bool has = false;
		while(n != 0)
		{
			int m = n%10;
			n = n/10;
			if(m == 3 || m == 4 || m == 7)
			{
				return false;
			}else if(m == 0 || m == 1 || m == 8)
			{
				if(has == true)
					result = true;
				else
					result = false;
			}else{
				has = true;
				result = true;
			}
		}
		return result;
	}
};