#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10] = {12, 8, 45, 19, 36, 5, -4, 0, 6, 3};
    bubbleSort(arr, 10);
    printArray(arr, 10);

    return 0;
}