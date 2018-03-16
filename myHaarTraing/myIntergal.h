#pragma once
#include"MyMat.h"
void myIntegral(MyMat *src, MyMat *sum, MyMat *sqsum, MyMat *tilted);
void GetGrayIntegralImage(unsigned char *Src, int *Integral, int Width, int Height, int Stride);
void quickSort(int *data_array,int *idx,int l,int r);  //快速排序并且将索引对应