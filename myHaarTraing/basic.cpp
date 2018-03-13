#pragma once
#include"basic.h"
int *getRand(int *result, int low, int high,int number)
{
	int allnumber = high - low + 1;
	int i,t = 0;
	int *markrand = new int[allnumber];
	memset(markrand,0,sizeof(int)*allnumber);
	while (t<number) {
		i = rand() % (high - low + 1) + low;
		if (markrand[i] == 0) {
			markrand[i] = 1;
			result[t] = i;
			t++;
		}
	}
	delete []markrand;
	return result;
}