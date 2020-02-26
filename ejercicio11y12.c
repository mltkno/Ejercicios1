#include <stdio.h>
main(){
char c;
c = getchar();
while (c != EOF) {
	c = getchar();
	if(c==' '){
		putchar('\n');

	}else{
		putchar(c);
	}
}
}