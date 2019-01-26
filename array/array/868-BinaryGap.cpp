#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;





class Solution {
public:
    int binaryGap(int N) {
        vector<int> res;
		int first = -1;
		int count = 0;
		while(N != 0)
		{
			int bit = N % 2;
			if(bit == 1 && first == -1)
			{
				first = count;
			}else if(bit == 1 && first != -1)
			{
				res.push_back(count - first);
				first = count;
			}
			count++;
			N = N / 2;
		}
		int n = res.size();
		if(n == 0)
			return 0;
		sort(res.begin(),res.end());
		return res[n-1];
    }
};