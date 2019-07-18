#include<stdio.h>
#include<vector>
using namespace std;



//¾­µäÌâÄ¿
class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
		if(data.size() < 2)
			return;
		int temp = 0;
		for(int i = 0; i  < data.size(); i++)
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
		*num1 = 0;
		*num2 = 0;
		for(int i = 0; i < data.size(); i++)
		{
			int a = data[i];
			if((a >> index)&1)
			{
				*num1 ^= a; 
			}else{
				*num2 ^= a;
			}
		}
    }
};