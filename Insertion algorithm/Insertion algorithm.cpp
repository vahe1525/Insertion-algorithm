

#include <iostream>

int main()
{
    const int n = 8;
    int arr[n] = { 2, 1, 7, 3, 2, 1, 10, 8 };

    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }

}
