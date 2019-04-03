#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int bitwiseComplement(int N) {
        vector<int> bits;
		int res = 0;
		if(N == 0)
			return 1;
		while(N != 0)
		{
			int bit = N % 2;
			N /= 2;
			if(bit == 0)
				bits.push_back(1);
			else
				bits.push_back(0);
		}
		for(int i = 0; i < bits.size(); i++)
		{
			res += pow(2,i)*bits[i];
		}
		return res;
    }
};