
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    
    char a[130];
	cin.get(a,130);

	
	for(int i = 0; a[i] != '\0'; i++)
	{
		if(a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = 'A' + a[i] - 'a';
		}else if(a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] = 'a' + a[i] - 'A';
		}
	   }
   cout << a <<endl;
	
    return 0;
}