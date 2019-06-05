#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
		if(data.size() < 2)
			return;
		int temp = 0;
		for(int i =0 ; i < data.size(); i++)
		{
			temp ^= data[i];
		}
		if(temp == 0)
			return;
		int index = 0;
		while((temp&1) == 0)
		{
			index++;
			temp = temp >> 1;
		}
		*num1 = *num2 = 0;
		for(int i = 0; i< data.size(); i++)
		{
			if(isBit(data[i],index))
				*num1 ^= data[i];
			else
				*num2 ^= data[i];
		}
		return;
    }

	bool isBit(int num,int index)
	{
		return (num>>index)&1;
	}
};