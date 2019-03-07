#include<stdio.h>
#include<vector>
using namespace std;

class Solution {
public:
	int  main(string A,string B) {

		int m = A.size();
		int n = B.size();
		int res = 0;
		int same = 0;
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{

				if(A[i] == B[j])
					same++;
			}
		}
		if(m < n)
		{
			res = m - same + n - m;
		}
		if(m == n)
		{
			res = m - same;
		}
		if(m > n)
		{
			res = m - same + m - n;
		}
		return res;
	} 
};