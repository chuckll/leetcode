#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
	bool is_primer(int n)
	{
		if(n == 1)
			return false;
		for(int i = 2; i < n-1; i++)
		{
			if(n % i == 0)
				return false;
		}
		return true;
	}


    int countPrimeSetBits(int L, int R) {
        vector<int> cotainer;
		int res = 0;
		for(int i = L; i <= R; i++)
		{
			int S = i;
			int count = 0;
			while(S != 0)
			{
				int yu = S % 2;
				if(yu == 1)
					count++;
				S = S / 2;
			}
			cotainer.push_back(count);
		}


		int s = cotainer.size();
		for(int i = 0; i < s; i++)
		{
			int num = cotainer[i];
			if(is_primer(num))
				res++;
		}
		return res;
    }
};