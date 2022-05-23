#include "funcs.h"
#include "tensor.cpp"


class perceptron
{
    private:
        float *weight, *inputs;
        float bias;
        int rawLen, degree;

    public:

        perceptron(tensor* inputs)
        {
            rawLen  = inputs->rawLen;
            degree = inputs->degree;
            weight = new float[rawLen];
        }

        float activate(float(*activationFunc)(float))
        {
            float result;
            for(int i = 0; i<degree; i++)
            {
                result += weight[i]*inputs[i];
            }
            return activationFunc(bias + result);
        }
};
