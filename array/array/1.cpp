#include <stdio.h>
#include <iostream>
#include <cstdio>

using namespace std;

long long gcd(long long a,long long b)
{
	if( a < b)
		return gcd(b,a);
	if( b == 0)
		return a;
	bool isAEven = false,isBEven = false;
	if(a%2 == 0)
		isAEven = true;
	if(b%2 == 0)
		isBEven = true;
	if(isAEven && isBEven)
		return 2*gcd(a>>1,b>>1);
	else if(isAEven && !isBEven)
		return gcd(a>>1,b);
	else if(!isAEven && isBEven)
		return gcd(a,b>>1);
	else
		return gcd(b,a-b);
}

int main(){
   
    long long  a,b,res;
    scanf("%lld",&a);
	scanf("%lld",&b);
	if(a == 1 || b == 1)
	     res = 1;
	else
	     res = gcd(a,b);
	cout << res;
	return 0;
}