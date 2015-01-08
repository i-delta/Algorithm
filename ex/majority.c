#include<stdio.h>
#include<./include/random.h>

int majority(int a[], int n){
	int i = i_uniform(0, n-1);
	int x = a[i];
	int k = 0, j;
	for (j = 0; j < n; j++){
		if(a[j] == x)
			k++;

	}
	return k > n/2;
}
