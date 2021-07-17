/**
 * @file numerical.c
 * @author Jacek Kotra (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include"numerical.h"


//dac opisy doxygen i posegregowac kod 
//poprawic funkcje trapz i dodac rectangle i simpson 

/**
 * @brief Function to calculate integral,
 * 
 * @param arg 
 * @return void* 
 */
void* trapz_mth(void* arg){

NUM *num1 = (NUM*)arg;

int _sample;
float _signal[10], var;


_sample = num1->_Sample;  

for(int i = 0; i< SIGNALLEN(num1->_Signal);i++){
    _signal[i] = num1->_Signal[i];
}

for(int i =1; i< SIGNALLEN(_signal);i++){
  var +=  (SIGNALLEN(_signal)/(float)_sample)*(_signal[i-1]+_signal[i])/2;
}

num1->_Integral = var;
printf("%f",var); 

pthread_exit(0); // po co
}


/**
 * @brief 
 * 
 * @param arg 
 * @return void* 
 */

void* rect_mth_left(void* arg){

NUM *num1 = (NUM*)arg;
int _sample;
float _signal[10], var;

_sample = num1->_Sample;

for(int i=0; i < SIGNALLEN(num1->_Signal);i++){
_signal[i]  = num1->_Signal[i]; 
}


for(int i=1; i < SIGNALLEN(_signal);i++){
  var += (_signal[i-1]) *  (SIGNALLEN(_signal) / (float)_sample);
}


num1->_Integral = var;
printf("%f", num1->_Integral );

pthread_exit(0);
}

/**
 * @brief 
 * 
 * @param arg 
 * @return void* 
 */
void* rect_mth_right(void* arg){

NUM *num1 = (NUM*)arg;
int _sample;
float _signal[10], var;

_sample = num1->_Sample;

for(int i=0; i < SIGNALLEN(num1->_Signal);i++){
_signal[i]  = num1->_Signal[i]; 
}


for(int i=1; i < SIGNALLEN(_signal);i++){
  var += (_signal[i]) *  (SIGNALLEN(_signal) / (float)_sample);
}


num1->_Integral = var;
printf("%f", num1->_Integral );

pthread_exit(0);
}


/**
 * @brief 
 * 
 * @param arg 
 * @return void* 
 */

void* monte_carlo_mth(void* arg){

NUM *num1 = (NUM*)arg;
int _sample;
float _signal[10], var;

_sample = num1->_Sample;




num1->_Integral = var;
printf("%f", num1->_Integral );

pthread_exit(0);
}