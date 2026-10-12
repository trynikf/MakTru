#include<iostream>

int main()
{
    int length_arr;
    std::cout 
        << "Введите длину массива:" 
        << std::endl;
    std::cin >> length_arr;
    double *array = new double[length_arr];

    for (int i = 0; i < length_arr; i++)
    {
        std::cout
            << "Ввождение " 
            << i+1 
            << "-го элемента массива" 
            << std::endl;
        std::cin >> array[i];
    }

    bool flag = true;
    int i = 0;

    while (i < length_arr-1)
    {
        if (array[i] > array[i + 1])
        {
            flag = false;
            break;
        }
        i++;
    }

    if (flag && length_arr > 0)
    {
        std::cout << "Последовательность возрастает";
    }
    else
    {
        std::cout << "Последовательность не возрастает";
    }
    std::cout << std::endl;
    return 0;
}