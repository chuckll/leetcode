#include<stdio.h>
#include<vector>
using namespace std;



//ÿ���ҵ�����Ԫ�أ�Ȼ��ת
class Solution {
public:
	void revert(vector<int> &A,int index)
	{
		vector<int> f;
		for(int i = index; i >= 0; i--)
		{
			f.push_back(A[i]);
		}
		for(int i = 0; i <f.size(); i++)
		{
			A[i] = f[i];
		}
	}

    vector<int> pancakeSort(vector<int>& A) {
        int n = A.size();
		vector<int> res;
		for(int i = n-1; i >= 0; i--)
		{
			if(A[i] == i+1)
				continue;
			int j;
			for(j = 0; j < i; j++)
			{
				if(A[j] == i+1)
					break;
			}
            revert(A,j);
			revert(A,i);      //ע��
			res.push_back(j+1);
			res.push_back(i+1);
		}
		return res;
    }
};