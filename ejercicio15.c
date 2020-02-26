#include <stdio.h>
main()
{
int fahr, celsius;
int lower, upper, step;
lower = 0;
upper = 300;
step = 20;
fahr = lower;
printf("---------------TEMPERATURE----------------\n");
while (fahr <= upper) {
	celsius = getCelsius(fahr);
	printf("%d\t%d\n", celsius, fahr);	
	fahr = fahr + step;
	}
}

int getCelsius(int x){
	return 5 * (x-32) / 9;
}
