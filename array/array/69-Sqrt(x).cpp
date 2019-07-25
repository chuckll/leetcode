#include<stdio.h>

using namespace std;




class Solution {
public:
    int mySqrt(int x) {
        int l = 1,h = x;
		while(l<=h)
		{
			int mid = l+(h-l)/2;
			int sqrt = x / mid;
			if(sqrt < mid)
				h = mid - 1;
			else if(sqrt > mid)
				l = mid + 1;
			else
				return mid;
		}
		return h;
    }
};