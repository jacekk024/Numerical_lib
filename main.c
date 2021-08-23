#include "numerical.h"







int main(int argc, char *argv[]){

pthread_t t1;
NUM num1;

///po co 
// pthread_attr_t atr;
// pthread_attr_init(&atr);


//wybor metody za pomoca komendy ...
// test commit



int _n = 100;
float _signal[] = {1,2,3,5,7,11,13,17,19,23};

num1._Sample = _n;
for(int i = 0; i<SIGNALLEN(_signal);i++){
num1._Signal[i] = _signal[i];
}

pthread_create(&t1,NULL,trapz_mth,(void*)&num1);
pthread_join(t1,NULL);


}