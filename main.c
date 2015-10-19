#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	int N;
	if (argc > 1){
		N = atoi(argv[1]);
	}
	else {
		fprintf(stderr, "Integer should be provided as first argument\n");
		return 1;
	}

	unsigned long long f1 = 1;
	int i;
	while (f1 < N){
		unsigned long long a = 0, b = 1*f1;
		while (b < N){
			unsigned long long b2 = b;
			b += a;
			a = b2;
		}
		if (b == N){
			break;
		}
		f1++;
	}

	unsigned long long a = 0, b = 1*f1;
	printf("0 %llu ", b);
	while (b < N){
		unsigned long long b2 = b;
		b += a;
		a = b2;
		printf("%llu ", b);
	}
	printf("\n");

	return 0;
}