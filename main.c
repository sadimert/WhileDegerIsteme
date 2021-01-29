#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int i, s;
	i = 0;
	s = 0;
while(s<10){
printf("Enter a Number:");
scanf("%d",&i);
s += i;
}
printf("Thene sum is %d",s);

}
