#include <stdio.h>
main(){
char c;
c = getchar();
while (c != EOF) {
	c = getchar();
	if(c=='\t'){
		putchar('\t');
	}
	else if(c=='\b'){
		putchar('\b');
	}
	else if(c=='\\'){
		putchar('\\');
	}else{
		putchar(c);
	}
}
}