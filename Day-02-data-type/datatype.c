#include <stdio.h>

int gender(void);

int main(void){
	int age = 10;

	printf("%d\n",age);

	gender();
    
	return 0;

}

int gender(void){
	char gend = 'M';

	printf("%c",gend);

	return 0;

}

