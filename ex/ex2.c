/*
 * using MC algorithm estimate the value of pi
 * Author: ywjia
 * date: 2014-10-22
 */

#include<stdio.h>
#include<math.h>
#include<string.h>
#include"../include/random.h"
#define N 1000000000
float HitorMass(float (*f)(float x), int n){
	int i = 0;
	int k = 0;
	for(i = 0; i < n; i++)
	{
		float x = f_uniform(0, 1);
		float y = f_uniform(0, 1);
		if(y <= f(x))
			++k;
	}

	return (float)(k)/(float)n;
}

float f(float x){
	return sqrtf(-x*x +1.0);
}


float pi(int n){
	return 4.0*HitorMass(f, n);
}

int compare(const char *s1, const char *s2){
	int count = 0;
	while(*s1++ && *s2++){
		if(*s1 == *s2)
			count++;
	}
	return count;
}
int main(int argc, char **argv){
	int i = 100;
	char str[10];
	for (i = 10; i <= N; i *= 10)
	{
		float p = pi(i);
		snprintf(str, 10, "%f", p);
		printf("pi = %.10f\twhen n = %-10d\t Precision : %-10d\n", p, i, compare(str, "3.141592")-2);
	}
	return 0;
}
