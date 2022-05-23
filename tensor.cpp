#include <iostream>


class tensor
{
    private:
        float *array;
        int len = 1;
    
    public:
        int *shape;
        int degree;

        tensor(float array[], int dim[], int deg)
        {
            shape = dim;
            degree = deg;
            for(int i = 0; i<deg; i++) len *= dim[i];
            array = new float[len];
        }

        void show()
        {
            std::cout << std::endl <<'[' << std::endl;
            for(int i = 0; i<degree; i++)
            {
                std::cout << '[';
                std::cout << ']';
            }
            std::cout << std::endl <<']' << std::endl;
        }

};


int main()
{
    tensor tensor1 = tensor(new float[5]{1, 2, 3, 4, 5}, new int[2]{2, 2}, 2);


    for(int i = 0; i<tensor1.degree; i++)
    {
        std::cout << tensor1.shape[i] << ", ";
    }
    tensor1.show();
    return 0;
}