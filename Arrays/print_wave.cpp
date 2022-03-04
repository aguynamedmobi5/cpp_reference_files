#include <iostream>

using namespace std;

void takeInput(int arr[][100], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void printWave(int arr[][100], int r, int c)
{
    for (int i = 0; i < c; i++)
    {

        if (i % 2 == 0)
        {
            for (int j = 0; j < r; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = r - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int arr[100][100];
    int r, c;
    cin >> r >> c;
    takeInput(arr, r, c);
    printWave(arr, r, c);

    return 0;
}