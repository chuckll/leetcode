#include<stdio.h>
#include<string>
#include<sstream>
using namespace std;



class Solution {
public:
    bool isPalindrome(int x) {
        stringstream sstr;
		sstr << x;
		string str = sstr.str();
	    int s = str.size();
		for(int i = 0; i < s/2; i++)
		{
			if(str[i] != str[s-1-i])
				return false;
		}
		return true;	
    }
};