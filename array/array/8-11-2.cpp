#include <iostream>
#include <string>
using namespace std;

int main() {
    int N,K;
	string S,res,res2;
	cin >> N >> K;
	scanf("%s",S);
	if(K == 1)
		cout << S;
	res += S[N+K-2];
	int count = 1;
	while(count < N)
	{
		int one_number = S[N+K-2-count] - '0';
		int temp = count-1;
		int two_number =  0;
		while(count-temp<K)
		{
			two_number ^= (res[temp] - '0');
			temp--;
			if(temp == -1)
				break;
		}
		int number = one_number ^ two_number;
		if(number == 0)
			res += '0';
		else
			res += '1';
		count++;
	}
	for(int i = N-1; i >= 0; i--)
		res2 += res[i];

	cout << res2 << endl;
	return 0;
}