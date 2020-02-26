#include <stdio.h>
main(){
char c;
int n=0;
int b=0;
int t=0;
c = getchar();
while (c != EOF) {
	c = getchar();
	if (c=='\n'){
		++n;
	}
	if (c==' '){
		++b;
	}
	if(c=='\t'){
		++t;
	}
}
printf("Saltos de línea:");
printf("%d",n);
printf("\n");
printf("Espacios en blanco:");
printf("%d",b);
printf("\n");
printf("Tabs:");
printf("%d",t);
printf("\n");
}