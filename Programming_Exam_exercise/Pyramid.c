#include <stdio.h>

int main() {
	int rows = 0;
	printf("Please input the rows of pyramid: ");
	scanf("%d", &rows);
	char c = 'A';
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows-1-i; j++) printf(" ");
		for (int k = 0; k < 2*i+1; k++) printf("%c", c+i);
		printf("\n");
	}
	return 0;
}
