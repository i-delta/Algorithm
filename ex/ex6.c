/*
 * This is Sherwood alogrithm search the sorted list
 * jiayawei
 */

#include<stdio.h>
#include<math.h>
#include"../include/random.h"

int search(int val[], int ptr[], int x, int i){
	/* 
	 * search x in var from index i
	 */
	while(x > val[i]){
		i = ptr[i];
	}

	return i;
}


int SherwoodSearch(int val[], int ptr[], int n, int x){
	int i = i_uniform(0, n-1);
	int max = val[i];
	int j, y;
	for(j = 0; j < sqrt(n); j++ ){
		y = val[j];
		if(max < y && y <= x){
			i = j;
			max = y;
		}
	}
	return search(val, ptr, y, i);
}


int main(int argc, char **argv){
	int val[] = {2, 3, 13, 1, 5, 21, 8};
	int ptr[] = {2, 5 ,6, 1, 7, 0, 3};

	int j = 0;
	for(j = 0; j < 100; j ++){
		int i = SherwoodSearch(val, ptr, 7, 5);
		printf ("the idx of 5 is %d\n", i);
	}
}
