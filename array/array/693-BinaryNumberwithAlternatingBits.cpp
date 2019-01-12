#include<stdio.h>

using namespace std;



class Solution {
public:
    bool hasAlternatingBits(int n) {
		int Yushu;
		if(n != 0)
		{
		     Yushu = n%2;
			 n = n/2;
		}
		while( n != 0)
		{
			int flag = n%2;
			if(flag == Yushu)
				return false;
			Yushu = flag;
			n = n/2;
		}
		return true;
    }
};