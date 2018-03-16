#pragma once
#include"MyMat.h"
void myIntegral(MyMat *src, MyMat *sum, MyMat *sqsum, MyMat *tilted);
void GetGrayIntegralImage(unsigned char *Src, int *Integral, int Width, int Height, int Stride);