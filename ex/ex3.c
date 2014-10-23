/*
 * calculate the integer f: [a, b] -> [c, d]
 * here set f(x) = sin(x).
 * Author: ywjia
 * Date: 2014-10-23
 */

#include"../include/random.h"
#include<stdio.h>
#include<math.h>


float integer_f(float(*f)(float x), float a, float b,
									float c, float d, int n){
	float S = (d-c)*(b-a);
	float x, y;
	int count = 0;
	int i = 0;
	for(i = 0; i < n; i++)
	{
		x = f_uniform(a, b);
		y = f_uniform(c, d);
		if(y <= f(x))
			count++;
	}

	return (float)(count)*S/n;
}


/* test for integer_f */

int main(int argc, char **argv){
	
	float a, b, c, d;
	int n;
	float r;
	
	while(printf("please input a, b, c ,d ,n value:\n ") && 
			scanf("%f %f %f %f %d", &a, &b, &c, &d, &n) != EOF)
	{
		r = integer_f(sinf, a, b, c, d, n);
		printf("Integer is:  %.6f\n", r);
	}
	return 0;
}
