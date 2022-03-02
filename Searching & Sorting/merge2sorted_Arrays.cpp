// This Code Needs Correction
#include <iostream>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void sortArrays(int arr1[], int arr2[], int n1, int n2)
{
    int nf = n1 + n2;
    int i = 0, j = 0, k = 0;
    int arrf[nf];

    while (k < nf)
    {
        if (arr1[i] > arr2[j])
        {
            arrf[k] = arr2[j];
            j++;
        }
        else if (arr2[j] > arr1[i])
        {
            arrf[k] = arr1[i];
            i++;
        }
        k++;
    }
    printArray(arrf, nf);
}

int main()
{
    int arr1[] = {1, 8, 10, 12};
    int arr2[] = {0, 2, 6};
    sortArrays(arr1, arr2, 4, 3);

    return 0;
}