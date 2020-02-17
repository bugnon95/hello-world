#include <stdio.h>
int sum(int);
int main() {

	unsigned char a = 30, mask = 0x80;
	
	for (int i = 0; i < 8; i++) {
		printf("%u", (a & mask)? 1 : 0);
		mask >>= 1;
	}
	printf("\n");
	char name[20];
	int i;
	printf("enter number: ");
	scanf("%d", &i);
	printf("Enter your name: ");
	scanf(" %[^\n]", name);

	printf("yOuR nAEe iS : %s, id is %d\n", name, i);

	for (int line = 0; line < 10; line++) {
		for (int star = 0; star < line+1; star++) {
			printf("*");
		}
		printf("\n");
	}

	for (int line = 1; line <= 10; line++) {
		for (int sp = 1; sp <= 10 - line; sp++) {
			printf(" ");
		}
		
		for (int star = 1; star <= 2*line-1; star++) {
			printf("*");
		}
		printf("\n");
	}
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for(int i = 0; i < 10; i++) {
		printf("%d\n", sum(arr[i]));
	}
	return 0;
}

int sum(int i) {
	static int Sum = 0;
	Sum += i;
	return Sum;
}
