#include <math.h>


//-----------------------Linear----------------------------
float linear(float x)
{
    return x;
}

//-----------------------Non-Linear------------------------

float sigmoid(float x)
{
    return 1/(1+exp(-x));
}

float relu(float x)
{
    return 0?x<0:x ;
}

float tanh(float x)
{
    return 2*sigmoid(2*x)-1;
}