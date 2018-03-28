#include <bits/stdc++.h>

using namespace std;

int main(){
	int result = 0;
	int a1, a2;

  scanf("%d %d", &a1, &a2);
  
	bool a1Boo;
	while(a1 > 0 && a2 > 0){
		if(a1 < a2){
			a1Boo = true;
		} else {
			a1Boo = false;
		}
		
		if(a1 == 1 && !a1Boo){
		  break;
		}
		if(a2 == 1 && a1Boo){
		  break;
		}

		if(a1Boo){
			a1 += 1;
			a2 -= 2;
			result++;
		} else {
			a2 += 1;
			a1 -= 2;
			result++;
		}
	}
	printf("%d\n", result);
}