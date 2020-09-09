#include <stdio.h>
#include <cmath> 

int main(void)
{
	double R, U, T;
	scanf("%lf", &R);
	
	U = R * R * M_PI;
	T = 2 * R * R;
	
	printf("%.6f\n%.6f", U, T);
	return 0;
}
