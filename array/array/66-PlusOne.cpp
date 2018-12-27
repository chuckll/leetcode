#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
	     stack<int> s;
		int n = digits.size();
		int jinwei = 0;
		for(int i = n-1; i >= 0; i--)
		{
			int ans = 0;
			if(i == n-1)
			{
				ans = digits[i] + 1;
			}else{
				ans = digits[i] + jinwei;
				jinwei = 0;
			}
			if(ans == 10)
			{
				if(i == 0)
				{
					s.push(0);
					s.push(1);
				}else{
				s.push(0);
				jinwei++;
				}
			}else{
				s.push(ans);
			}
		}
		while(!s.empty())
		{
			res.push_back(s.top());
			s.pop();
		}
		return res;
    }
};