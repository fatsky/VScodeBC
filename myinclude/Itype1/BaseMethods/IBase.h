/**
 * Methods NOT tested yet!!!
 **/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "IstringArray.h"
#include "Istring.h"

typedef char* char_ptr;
typedef char* string;
typedef char** char_ptr_ptr;
typedef char** string_ptr;


int MaxInt(int a, int b) 
{
    return (a > b ? a : b);
}

int MinInt(int a, int b) 
{
    return (a < b ? a : b);
}

float MaxFloat(float a, float b)
{
    return (a > b ? a : b);
}

float MinFloat(float a, float b)
{
    return (a < b ? a : b);
}

double MaxDouble(double a, double b) 
{
    return (a > b ? a : b);
}

double MinDouble(double a, double b)
{
    return (a < b ? a : b);
}