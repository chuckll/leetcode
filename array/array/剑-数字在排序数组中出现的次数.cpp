#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
		return binary(data,k+0.5,0,data.size()-1) - binary(data,k-0.5,0,data.size()-1);
    }


	int binary(vector<int> data,double k,int first,int last)
	{
		while(first <= last)
		{
			int mid = (last + first ) / 2;
			if(data[mid] < k)
				first = mid + 1;
			else if(data[mid] > k)
				last = mid - 1;
		}
		return first;
	}
};