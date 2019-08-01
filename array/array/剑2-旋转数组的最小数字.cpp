#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
		int l = 0, r = rotateArray.size()-1;
		while(l < r)
		{
			int m = l + (r-l)/2;
			if(rotateArray[m] > rotateArray[r])
			{
				l = m+1;
			}else
			{
				r = m;
			}
		}
		return rotateArray[l];
    }
};