#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
		return binary(data,k+0.5) - binary(data,k-0.5);
    }


	int binary(vector<int> data,double f)
	{
		int first = 0, last = data.size()-1;
		while(first <= last)
		{
			int mid = (first+last)/2;
			if(data[mid] > f)
			{
				last = mid-1;
			}else{
				first = mid+1;
			}
		}
		return first;
	}
};