#include<stdio.h>
#include<string>
using namespace std;


class Solution {
public:
    int findLUSlength(string a, string b) {
		if(a.compare(b) == 0)
		{
			return -1;
		}
		return a.size() > b.size() ? a.size() : b.size();
    }
};