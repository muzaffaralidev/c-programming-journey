#include <stdio.h>

int gender(void);
int nam(void);

int main(void){
	int age = 10;

	printf("%d\n",age);

	gender();
    nam();
	return 0;

}

int gender(void){
	char gend = 'M';

	printf("%c",gend);

	return 0;

}


// i print my name using string 
int nam(void){
	char name[] = "Ali";

	printf("\n%s",name);
}
