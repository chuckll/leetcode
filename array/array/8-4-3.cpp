#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
	int endx,endy;
    int W,XE,YE,XC,YC,PX,PY;
	cin >> W >> XE >> YE >> XC >> YC >> PX >> PY;
	vector<int> biaoQing;
    for(int i = 0; i < 40; i++){
		int x;
		scanf("%d",&x);
		biaoQing.push_back(x);
    }
	getchar();
	char c[10010];
	cin >> c;
	vector<char> input;
	for(int i = 0; c[i] != '\0'; i += 2)
	{
		int num = 0;
		if(c[i] >= '0' && c[i] <= '9')
		    num += c[i] - '0';
		else
			num += c[i] - 'A' + 10;
		num *= 16;
		if(c[i+1] >= '0' && c[i+1] <= '9')
		    num += c[i+1] - '0';
		else
			num += c[i+1] - 'A' + 10;
		input.push_back(num);
	}

	int beginx = 0, beginy = 0;
	vector<int> allWidth;  //每个字符的长度
	vector<int> allHeight;
	//先分行
	vector<char> line;
	int n = input.size();
	int lineLength = W;
	for(int i = 0; i < n; )
	{
		if((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z') || input[i] == ',' || input[i] == '.' || input[i] == ' ')
		{
			lineLength -= XE;

		}else if(input[i] == '#')
		{
			if((i+1) < n && input[i] == 'r')
			{
				lineLength = W;
				endy = beginy + PY;
			}else if((i+1) < n  && input[i+1] == '0')
			{
				lineLength -= biaoQing[0];
				endy = 

			}else if((i+1) < n && input[i+1] == '#')
			{
				lineLength -= XE;
				
			}




		}



		




	}








    return 0;
}