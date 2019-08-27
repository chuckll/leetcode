#include<stdio.h>
#include<vector>
using namespace std;





class Solution {
public:

	int integer(int n,vector<int>& memory)
	{
		if(n == 2)
			return 1;
		if(memory[n] != 0)
			return memory[n];
		int res = -1;
		for(int i = 1; i < n; i++)
		{
			res = max(res,max(i*(n-i),i*integer(n-i,memory)));
		}
		memory[n] = res;
		return res;
	}
	


    int integerBreak(int n) {
        
		vector<int> memory(n+1,0);
		return integer(n,memory);

    }
};