#include <iostream>
#include <algorithm>
using namespace std;
template <class T>
void sort_arr(T* arr, int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (arr[i] > arr[j])
            {
                T b;
                b = arr[i];
                arr[i] = arr[j];
                arr[j] = b;
            }
        }
    }
}

template <>
void sort_arr<char>(char* arr, int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (tolower(arr[i]) > tolower(arr[j]))
            {
                char b;
                b = arr[i];
                arr[i] = arr[j];
                arr[j] = b;
            }
        }
    }
}
//-------------------------------------------------------------------------
template <typename Type>
class Stack {
private:
    Type* niz;
    int size;
    int curr_index;
public:
    Stack(int x) {
        //Fizicka velicina Stacka 
        size = x;
        //indeks na koji dodajemo element
        //Stack struktura koja raste prema nizim mem.lokacijama
        curr_index = x - 1;
        //Niz elemenata tipa kojeg posaljemo
        niz = new Type[x];
    }
    bool is_full() {
        if (curr_index < 0) {
            cout << "Stack is full" << endl;
            return true;
        }
        return false;
    }
    bool is_empty() {
        if (curr_index == size - 1) {
            return true;
        }
        return false;
    }
    void push(Type value) {
        if (is_full()) {
            cout << "Stack is full" << endl;
            return;
        }
        else {
            niz[curr_index] = value;
            curr_index--;
        }
    }
    Type pop() {
        if (!is_empty()) {
            curr_index++;
            return niz[curr_index];
        }
    }
};
