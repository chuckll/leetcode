#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int maxTurbulenceSize(vector<int>& A) {
        if(A.size() == 1) 
            return 1;
        int res;
		int max = 1;
        char flag = 'a';
        for(int i = 1; i < A.size(); i++)
        {
            
			if((A[i-1] < A[i]) && (flag == '>'))
            {
                res++;
                flag = '<';
            }else if((A[i-1] > A[i]) && (flag == '<'))
			{
				res++;
                flag = '>';
			}else{
				if(max < res)
				{
					max = res;
				}
				if(A[i-1] > A[i])
				{
					res = 2;
					flag = '>';
				}
				else if(A[i-1] < A[i])
				{
					res = 2;
					flag = '<';
				}
				else
				{
					res = 1;
					flag = '=';
				}
			} 
        }
        if(max < res)
		{
			max = res;
		}
			return max;
	}
};