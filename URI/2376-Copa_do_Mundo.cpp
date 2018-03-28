#include <bits/stdc++.h>

using namespace std;

vector<char> arr = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};

void removeZ() {
	for(int k = 0; k < arr.size(); k++) {
		if(arr[k] == 'Z'){
			arr.erase(arr.begin()+k);
			k--;
		}
	}
}


int main() {
	
	int index = 16;
	while(index >= 2){
		for(int i = 0; i < index; i += 2) {
			
			int a, b;
			scanf("%d %d", &a, &b);

			if(a > b) {
				arr[i+1] = 'Z';
				
			} else {
				arr[i] = 'Z';
			}
		}
		index = index / 2;
		removeZ();
	}

	removeZ();
	printf("%c\n", arr[0]);
	
	return 0;
}