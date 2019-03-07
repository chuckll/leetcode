#include<stdio.h>
#include<string>
using namespace std;


class Solution {
public:
    string complexNumberMultiply(string a, string b) {
		string a1,a2,b1,b2,res;
		int a3,a4,b3,b4,res1,res2;
		int f1,f2;
		for(int i = 0; i < a.size(); i++)
		{
			if(a[i] == '+')
			{
				f1 = i;
				break;
			}
		}
		for(int i = 0; i < b.size(); i++)
		{
			if(b[i] == '+')
			{
				f2 = i;
				break;
			}
		}
		a1 = a.substr(0,f1);
		int s1 = a.size()-f1-1;
		a2 = a.substr(f1+1,s1-1);

		b1 = b.substr(0,f2);
		int s2 = b.size()-f2-1;
		b2 = b.substr(f2+1,s2-1);

		a3 = atoi(a1.c_str());
		a4 = atoi(a2.c_str());

		b3 = atoi(b1.c_str());
		b4 = atoi(b2.c_str());

		res1 = a3*b3-a4*b4;
		res2 = a3*b4+a4*b3;

		res = to_string(res1) + "+" + to_string(res2) + "i";
		return res;



    }
};