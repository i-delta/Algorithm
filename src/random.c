#include"../include/random.h"
#include<stdlib.h>

int i_uniform(int x, int y){

	int range = y - x;
	int buckets = RAND_MAX / range;
	int limit = buckets * range;
	int r;

	do{
		r = (int)random();
	}while(r >= limit);

	return x + r/buckets;
}

float f_uniform(float x, float y){
	float range = y - x;
	float buckets = (float)RAND_MAX/range;
	float limit = buckets*range;
	float r;
	do{
		r = (float)random();

	}while(r >= limit);
	return x + r/buckets;
}
