#include<stdio.h>
#include<string>
#include<stack>
using namespace std;




class Solution {
public:
    string intToRoman(int num) {
        string res;
		int values[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
		string keys[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
		for(int i = 0; i < 13; i++)
		{
			while(num >= values[i])
			{
				res.append(keys[i]);
				num -= values[i];
			}
		}
		return res;
    }
};