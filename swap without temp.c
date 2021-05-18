#include<stdio.h>

int main(){

int x,y;
	x = 5;
	y = 6;
	
	printf("\nx = %d\ny = %d\n",x,y);
	y = x + y;
	x = y - x;
	y = y - x;
	printf("\nx = %d\ny = %d\n",x,y);

return 0;
}
