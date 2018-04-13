#pragma once

#include "SUB_NDN_N.c"

int *MOD_NN_N( int *a, int *b)
{
    int comp,N;
    comp=COM_NN_D(a, b);
    int *temp,*N;// This is our remainder

    if((comp == 2))//IF A > B
    {
        N=DIV_NN_N (a, b);// N: A = N*B + r-This is Our divider
        temp = SUB_NDN_N(a, b, N);//r = A - N*B-calculating our remainder
    }else{//IF A <= B
        N=DIV_NN_N (b,a );// N: A = N*B + r-This is Our divider
        temp = SUB_NDN_N(b, a, N);//r = A - N*B-calculating our remainder

    }
    return temp;
}