#include <stdio.h>
main(){
char c;
char b;
c = getchar();
while (c != EOF) {
	c = getchar();
	b=c;
	if(!(b==' '||c==' ')){
		putchar(c);
	}
}
}