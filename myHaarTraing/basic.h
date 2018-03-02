/*************************************************
Date:2018-02-05
Description:基本参数
**************************************************/
#pragma once
#define THREE_CHANNEL 3 //三通道
#define ONE_CHANNEL 1  //一通道

#define INT_TYPE 1      //数据类型
#define FLOAT_TYPE 2
#define UCHAR_TYPE 3
#define DOUBLE_TYPE 4
#define SHORT_TYPE 5

#ifndef PATH_MAX
#define PATH_MAX 512
#endif /* PATH_MAX */

#define _MY_END_ exit:;
#define __MY_EXIT__        goto exit;

typedef unsigned char uchar;
typedef unsigned short ushort;
typedef int    sum_type;
typedef double sqsum_type;
typedef short  idx_type;
typedef void MyArr;

