#include <iostream>

void print_array(
    const char* const comment,
    const int* const array,
    const int length);
void swap( int &elem_one, int &elem_two);

int main()
{
    int length_arr;
    std::cout 
        << "Введите длину массива" 
        << std::endl;
    std::cin >> length_arr;
    int *array = new int[length_arr];

    for (int i = 0; i < length_arr; i++)
    {
        array[i] = rand() % 10;
    }
    print_array("Сгенерированый массив: ", array, length_arr);

    for (int i = 0; i < length_arr/2; i++)
    {
        swap(array[i], array[length_arr-i-1]);
    }
    print_array("Массив после преобразования: ", array, length_arr);

    return 0;
}

void print_array(
    const char* const comment,
    const int* const array,
    const int length)
{
    static const char space = ' ';
    std::cout << comment << std::endl;
    for (int i = 0; i < length; i++)
    {
        std::cout << array[i];
        std::cout << space;
    }
    std::cout << std::endl;
}

void swap(int &elem_one, int &elem_two)
{
    int temp = elem_one;
    elem_one = elem_two;
    elem_two = temp;
}