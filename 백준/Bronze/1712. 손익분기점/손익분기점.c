#include<stdio.h>
int main(void) {

	int a, b, c;
	int bep,tmp;
	scanf("%d %d %d", &a, &b, &c);
	
	if (b >= c) {
		printf("%d", -1);
	}
	else {
		tmp = a % (c - b);
		if (tmp == 0) {
		bep = a / (c - b)+1;
		}
		else {
		bep = a / (c - b)+1;
		}
		printf("%d", bep);
	}
	

}