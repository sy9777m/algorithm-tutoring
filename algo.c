#include <stdio.h>

int main(void) {
	int a[3][3] = {{10, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int sum = 0;

	for (int i = 0; i < sizeof(a) / sizeof(*a); i++) {
		for (int j = 0; j < sizeof(*a) / sizeof(int); j++) {
			sum += *(*(a + i) + j);
		}
	}

	printf("%d\n", sum);

	return 0;
}
