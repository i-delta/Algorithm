#include"../include/random.h"
#include<stdio.h>


float pi(int n){
	int i;
	int k = 0;	// the darts located in circle
	float x, y;
	for(i = 0; i < n; i++)
	{
		x = f_uniform(0, 1);
		y = x;
		//y = f_uniform(0, 1);
		if(x*x + y*y <= 1)
			k++;
	}

	return (4.0*k)/(float)n;
}

int main(){

	for(int i = 1; i < 100000000; i = i*100)
	{
		printf("pi = %6f  when n = %d\n", pi(i), i);
	}
//	printf("pi = %6f  ", pi(100000000));
	return 0;
}
