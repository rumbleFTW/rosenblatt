// #include <iostream>


class tensor
{
    public:
        float *array;
        int *shape;
        int degree;
        int rawLen;

        tensor()
        {
            rawLen = 1;
            degree = 0;
            shape = {0};
        }

        void init(float array[], int dim[], int deg)
        {
            shape = dim;
            degree = deg;
            for(int i = 0; i<deg; i++) rawLen *= dim[i];
            array = new float[rawLen];
        }

        void zeros(int dim[], int deg)
        {
            shape = dim;
            degree = deg;
            for(int i = 0; i<deg; i++) rawLen *= dim[i];
            float array[rawLen] = {};
        }

        // void show()                                              
        // {
        //     std::cout << std::endl <<'[' << std::endl;
        //     for(int i = 0; i<degree; i++)
        //     {
        //         std::cout << '[';
        //         std::cout << ']';
        //     }
        //     std::cout << std::endl <<']' << std::endl;
        // }

};