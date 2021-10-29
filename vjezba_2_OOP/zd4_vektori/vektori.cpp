#include "Header.h"
void MyVector::vector_new(size_t sz)
{
    size = 0; // brojac
    capacity = 1;
    arr = new int[capacity]; 
}
void MyVector::vector_delete()
{
    delete[] arr; // oslobaðamo se memorije
}
void MyVector::vector_push_back(int n)
{
        if (size == capacity)
        {
            capacity *= 2; 
            int* new_arr = new int[capacity];// kreiramo novi niz
            for (int i = 0; i < capacity; i++)
                new_arr[i] = arr[i]; // u novi niz unosimo elemente iz prvog niza
            delete[] arr; // oslobaðamo memoriju
            arr = new_arr;
        }
    arr[size] = n;
    size++;
}
void MyVector::vector_pop_back()
{
    size = size - 1; // brisemo zadnji clan u nizu
}
int& MyVector::vector_front()
{
    return arr[0]; // printamo prvi clan u nizu 
}
int& MyVector::vector_back()
{
    return arr[size - 1]; // printamo zadnji clan u nizu
}
size_t MyVector::vector_size()
{
    return size;
}

void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        cout << arr[i] << " ";
    cout << endl;
}