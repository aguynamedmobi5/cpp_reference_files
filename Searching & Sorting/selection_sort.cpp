#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Finding min element in array
        int min = arr[i], minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j]; // for running loop
                minIndex = j;
            }
        }

        // Swaping
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int arr[] = {3, 1, 6, 9, 0, 4, 2};
    selectionSort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}