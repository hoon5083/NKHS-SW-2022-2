#include <stdio.h>


int main(){
	char str[1000] = "\0";
	char f, l;
	int Z, i, length = 0;
	scanf("%d", &Z);
	for(i = 0; i < Z; i++){
		scanf("%s", str);
		length = strlen(str);
		f = str[0];
		l = str[length - 1];
		printf("%c%c\n", f, l);
	}
}

