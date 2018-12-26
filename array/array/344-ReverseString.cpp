#include<stdio.h>
#include<string>
using namespace std;



class Solution {
public:
    string reverseString(string s) {
		string res = s;
		int n = s.size();
		for(int i = 0; i < n; i++)
		{
			res[n-1-i] = s[i];
		}
		return res;
    }
};