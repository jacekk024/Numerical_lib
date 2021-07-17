/**
 * @file numerical.h
 * @author Jacek Kotra 
 * @brief 
 * @version 0.1
 * @date 2021-07-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#pragma once 
#ifndef _NUMERICAL_H
#define _NUMERICAL_H
#include<stdio.h>
#include<pthread.h>

#define SIGNALLEN(x) ( sizeof(x) / sizeof(x[0]) )


//wybor metody calkowania 
typedef struct numerical
{

    int _Signal[10];
    int _Sample;
    float _Integral;
    
    /* data */
}NUM;

void* trapz_mth(void* arg);
void* rect_mth(void* arg);

#endif