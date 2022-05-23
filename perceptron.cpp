#include "funcs.h"


class perceptron
{
    private:
        double *weight, *inputs;
        double bias;
        int deg;

    public:

        perceptron(double* inp)
        {
            inputs = inp;
            int deg  = sizeof(inputs)/sizeof(double);
            weight = new double[deg];
        }

        float activate()
        {
            double result;
            for(int i = 0; i<deg; i++)
            {
                result += weight[i]*inputs[i];
            }
            return sigmoid(bias + result);
        }
};