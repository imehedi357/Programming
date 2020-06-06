#include <stdio.h> 
#define limit 30

int main() {
	int a = 10, b = 15;
	int sum = a + b;
	
	if(sum < limit) {
		printf("%d", sum);
	}	
}

