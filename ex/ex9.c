#include"../include/random.h"
#include<stdio.h>
#include<stdlib.h>


int Btest(int a, int n){
	int s = 0;
	int t = n-1;

	do{
		s++;
		t = t/2;
	}while(t%2 == 1);

	int x = 1;
	for(int i = 0; i < t; i++)
		x *= a;
	x = x%n;
	if(x == 1 || x == n-1)
		return 1;
	for(int j = 1; j < s; j++){
		x = (x*x)%n;
		if(x == n-1)
			return 1;
	}
	return 0;
}


int millRab(int n){
	int a = i_uniform(2, n-2);
	return Btest(a, n);
}


int RepeatMillRob(int n, int k){
	for(int i = 1; i <= k; i++)
		if(millRab(n) == 0)
}
