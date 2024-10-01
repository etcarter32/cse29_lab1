#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if (argc != 2) {
		printf("Usage: pyramid.c [height]");
		return 1;
	}

	size_t height = atoi(argv[1]);

	if (height <= 0) {
		printf("height must be greater than 0");
		return 1;
	}

	for (size_t i = 0; i < height; ++i) {
		for (size_t j = height - i - 1; j > 0; --j) {
			printf(" ");
		}
		for (size_t j = 0; j < i + 1; ++j) {
			printf("#");
		}
		for (size_t j = 0; j < i + 1; ++j) {
			printf("#");
		}
		printf("\n");
	}

	return 0;
}
