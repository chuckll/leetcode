#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    
    string a,protocol,host,path,parameter;
	cin >> a;
	int index1 = 0,index2 = 0,index3 = 0;
	
	for(int i = 0; i< a.size(); )
	{
		if(a[i] == ':')
		{
			protocol = a.substr(0,i);
			index1 = i+3;
			i += 3;
			continue;
		}
		if(a[i] == '/')
		{
			host = a.substr(index1,i-index1);
			index2 = i+1;
			i++;
			continue;
		}
		if(a[i] == '?')
		{
			if(index2  != 0)
			{
			   path = a.substr(index2,i-index2);
			}
			index3 = i+1;
			parameter = a.substr(index3);
			i++;
			break;
		}
		i++;
	}
	if(index2 == 0)
		host = a.substr(index1);
   
	cout <<"protocol="<<protocol <<endl;
	cout <<"host="<<host <<endl;
	cout <<"path="<<path <<endl;
	cout <<"parameter="<<parameter <<endl;
	
    return 0;
}