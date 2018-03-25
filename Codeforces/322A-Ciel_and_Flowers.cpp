#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long r, g, b;
	scanf("%lld %lld %lld", &r, &g, &b);

	long long restR, restG, restB;

	restR = r % 3;
	restG = g % 3;
	restB = b % 3;

	long long result = r / 3 + g / 3 + b / 3 + min(restR, min(restG, restB));

	if( restG == 2 && restB == 2 && restR == 0 && r != 0 ||
		restB == 2 && restR == 2 && restG == 0 && g != 0 ||
		restR == 2 && restG == 2 && restB == 0 && b != 0){
		result++;
	}
    
	printf("%lld\n", result);
	
	return 0;
}