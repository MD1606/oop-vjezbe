#include "Header.hpp"

int main()
{
    /*
    int arr[5];
    char charr[5];
    int num;
    cout << "Enter num of elements" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {

        cin >> arr[i];
        cout << endl;
    }

    sort_arr(arr,num);

    cout << "Sorted array is:" << endl;
    for (int i = 0; i < num; i++)
        cout << arr[i] << endl;

    for (int i = 0; i < num; i++)
    {

        cin >> charr[i];
        cout << endl;
    }

    sort_arr(charr,num);

    cout << "Sorted char array is:" << endl;
    for (int i = 0; i <num; i++)
        cout << charr[i] << endl;
        */
    Stack<int> stack(10);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    int x = stack.pop();
    cout << x << endl;
    x = stack.pop();
    cout << x << endl;
    x = stack.pop();
    cout << x << endl;
}