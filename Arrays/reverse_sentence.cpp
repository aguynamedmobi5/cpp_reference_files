#include <iostream>
using namespace std;

int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
        count++;

    return count;
}

void reverseSentence(char input[])
{
    int len = length(input);
    int i = len - 1, j = 0;
    char arr[100];
    while (i > 0)
    {
        arr[j] = input[i];
        i--;
        j++;
    }

    input = arr;
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    reverseSentence(input);
    cout << input << endl;

    return 0;
}