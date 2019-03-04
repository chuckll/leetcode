#include<stdio.h>
#include<string>
#include<stack>
using namespace std;


class Solution {
public:
    int minAddToMakeValid(string S) {
        int n = S.size();
        stack<char> q;
		char c;
		for(int i = 0; i < n; i++)
		{
			if(q.empty())
			{
				q.push(S[i]);
			}else{
				c = q.top();
				if(c == '(' && S[i] == ')')
				{
					q.pop();
				}else{
					q.push(S[i]);
				}
			}
		}
		return q.size();
    }
};