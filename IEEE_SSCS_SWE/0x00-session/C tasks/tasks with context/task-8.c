#include <stdio.h>

void isEven(int n) {
	if (n % 2 == 0) {
		printf("%d is even\n", n);
	} else {
		printf("%d is odd\n", n);
	}
}

void calculateArea(float n) {
	if (n == 0) {
		printf("no radius specified\n");
	} else {
		printf("the radius exists\n");
	}
}

int main() {
    float n;
    int m;
    scanf("%f",&n);
    m = n;
    isEven(m);
    calculateArea(n);

    return 0;
}