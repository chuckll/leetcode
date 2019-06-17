#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
		if(sequence.size() == 0)
			return false;
		return Verify(sequence,0,sequence.size()-1);
    }

	bool Verify(vector<int> sequence,int start,int end)
	{
		if(start >= end)
			return true;	
		bool isFirst = false;
		int flag  = -1;
		if(sequence[start] < sequence[end])
		{
			isFirst = true;
		}
		for(int i = start; i < end; i++)
		{
			if((isFirst == true) && (sequence[i] > sequence[end] ))
			{
				flag = i;
				isFirst = false;
			}
			
			if((isFirst == false) && (sequence[i] < sequence[end] ))
			{
				return false;
			}
		}
	
		return Verify(sequence,start,flag-1)&&Verify(sequence,flag,end-1);
	
	}

};