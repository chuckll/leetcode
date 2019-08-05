#include <iostream>
#include <cstdio>
#include<string>
using namespace std;

int main(){
    
	string num,res;
	scanf("%s",num);


	res += num[2] + '.';
	res += num[3] +num[4];
	res += num[4] + 1;
	res += num[4] - 1;
	int a = num[5] - '0', b = num[6] - '0';
	if(a*b > 9)
	{
		res += to_string(a*b);
	}else
		res += '0' + to_string(a*b);

	return stof(res);

   
    return 0;
}