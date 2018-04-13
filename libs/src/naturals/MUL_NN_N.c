#pragma once

#include "MUL_Nk_N.c"

int *MUL_NN_N( int *a,int *b)
{

    int *c,*n;
    int i=0;
    c=0;
    for(int j=b[0];j>0;j--)
    {
        n=MUL_Nk_N(MUL_ND_N(a,b[j]),i);//multiplay our first number on last numeral of the seconf number and myltiply resilt on 10^i;


        c=ADD_NN_N(c,n);//sum the number,calculating of multiplay on numerals

        i++;
    }
    return c;

}
