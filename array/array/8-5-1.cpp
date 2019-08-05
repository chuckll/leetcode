
#include <iostream>
#include <cstdio>
#include <vector>
#include<math.h>
using namespace std;



double round(double r)
{
	return (r > 0.0) ? floor(r + 0.5) : ceil(r - 0.5);
}


int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x; 
		scanf("%d",&x);
		int res = x - 5000;
		double money;
		if( res <= 0)
		{
			cout << 0 << endl;
		}else if(res > 0 && res <= 3000)
		{
			money = res*0.03;
			cout << round(money) << endl;

		}else if(res > 3000 && res <= 12000)
		{
			money = 3000*0.03 + (res-3000)*0.1;
			cout << round(money) << endl;

		}else if(res > 12000 && res <= 25000)
		{
			money = 3000*0.03 + 9000*0.1 + (res-12000)*0.2;
			cout << round(money) << endl;

		}else if(res > 25000 && res <= 35000)
		{
			money = 3000*0.03 + (9000)*0.1  + 13000*0.2 + (res-25000)*0.25;
			cout << round(money) << endl;

		}else if(res > 35000 && res <= 55000)
		{
			money = 3000*0.03 + (9000)*0.1  + 13000*0.2 + (35000-25000)*0.25 + (res-35000)*0.3;
			cout << round(money) << endl;

		}else if(res > 55000 && res <= 80000)
		{
			money = 3000*0.03 + (9000)*0.1  + 13000*0.2 + (35000-25000)*0.25 + (55000-35000)*0.3 + (res-55000)*0.35;
			cout << round(money) << endl;
		}else{
			money = 3000*0.03 + (9000)*0.1  + 13000*0.2 + (35000-25000)*0.25 + (55000-35000)*0.3 + (80000-55000)*0.35 + (res-80000)*0.45;
			cout << round(money) << endl;
		}

	}
	return 0;
}