#include<stdio.h>
#include<string>
#include<math.h>
using namespace std;


class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
		int n = s.size();
		if(n == 0)
			return res;
		for(int i = 0; i < n; i++)
		{
			int num = s[i] - 'A' + 1;
			res += num*(pow(26,n-1-i));
		}
		return res;
    }
};