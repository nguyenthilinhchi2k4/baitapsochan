#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int isEvenNumber(int number);




int main() {
	int n , m, i;
	printf("Please, nhap vao 2 so:\n");
	printf("+ n: ");
	scanf("%d", &n);	
	printf("+ m: ");
	scanf("%d", &m);

	printf("nhung so chan trong khoang %d and %d:\n", n, m);
	for (i = n + 1 ; i < m; i++) {
		if ( isEvenNumber(i) ) {
			printf("%d\n", i);
		}
	}
		
	return 0;
}
 int isEvenNumber(int number) {
	if (number % 2 == 0) {
		return 1;
	}
	return 0;
}

