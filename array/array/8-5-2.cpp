#include <iostream>
#include <cstdio>
#include<vector>
#include<string>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<string> nums;
	getchar();
	for(int i = 0; i < n; i++)
	{
		string res;
		char s[50010];
		cin >> s;

		int p = 0;
		int length = 1;
		res += s[0];
		int j;
		for(j = 1; s[j] != '\0';j++)
		{
			if(s[j] == s[j-1] + 1)
			{
				length++;
			}else{

				if(length >= 4)
				{
					res =res+ '-' + s[j-1];
				}else if(length <4 && length>1){
					for(int k = p+1; k < j; k++)
						res += s[k];
				}
				res += s[j];
				
				length = 1;
				p = j;
			}


		}

		if(length >= 4)
				{
					res =res+ '-' + s[j-1];
				}else if(length <4 && length>1){
					for(int k = p+1; k < j; k++)
						res += s[k];
				}
			cout << res <<endl;
	}
	return 0;
}