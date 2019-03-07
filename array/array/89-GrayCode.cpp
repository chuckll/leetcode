#include<stdio.h>
#include<vector>
#include<math.h>
using namespace std;


class Solution {
public:
    vector<int> grayCode(int n) {
		vector<int> res;
		int m = pow(2,n);
		for(int i = 0; i < m; i++)
		{
			int f = i ^ (i/2);
			res.push_back(f);
		}
		return res;
		
    }
};