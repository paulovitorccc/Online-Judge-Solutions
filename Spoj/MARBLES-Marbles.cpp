#include <iostream>
#include <stdio.h>
 
using namespace std;
 
long long comb(int n, int k){
	if(k>n-k) k=n-k;
	long long aux = n - k;
	long long result = 1;
	for(int i = 0; i < k; i++){
		result = result * (n-i)/(i+1);
	}
	return result;
}	
 
int main(){
	int casos,n,k;
	cin >> casos;
 
	for(int t = 1; t <= casos;t++){
		scanf("%d %d",&n,&k);
        printf("%lld\n",comb(n-1,k-1));
	}
	return 0;
}  