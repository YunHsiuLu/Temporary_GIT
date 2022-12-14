#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	FILE *ptr;
	ptr = fopen("test.txt", "r");

	char lines[50];
	fgets(lines, 50, ptr);

	// check the number of lines
	int digits = 0, N = 0;
	for (int i = 0; (lines[i] != '\n'); i++) {
		printf("%c ", lines[i]);
		digits++;
	}
	printf("\n%d\n", digits);

	for (int i = 0; i < digits; i++) {
		N += (int)(lines[digits-1-i] - '0')*pow(10, i);
	}
	printf("%d\n", N);

	// check the following first country
	char country[50];
	fscanf(ptr, "%s %*s %*s", country);
	printf("Next line: %s\n", country);
	fclose(ptr);
	return 0;
}
