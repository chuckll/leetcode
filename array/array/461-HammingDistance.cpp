#include<stdio.h>
#include<bitset>
using namespace std;




class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32> num1(x),num2(y);
		int result = 0;
		for(int i = 0; i < 32; i++)
		{
			if(num1[i]+num2[i] == 1)
				result++;
		}
		return result;
    }
};