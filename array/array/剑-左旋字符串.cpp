#include<stdio.h>
#include<string>
using namespace std;


class Solution {
public:
    string LeftRotateString(string str, int n) {
        string res;
		if(str.size() == 0)
			return str;
		int length = str.size();
		if(n > length)
			n = n % length;
		res.append(str.substr(n));
		res.append(str.substr(0,n));
		return res;
    }
};