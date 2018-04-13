#pragma once
#include "../../integer.h"


int *MUL_ZM_Z(int *a)
{
    ((a[0]==0)?a[0]=1:a[0]=0);// so in our number the first numeral is sign of number we change it if we need
    return a;

}
