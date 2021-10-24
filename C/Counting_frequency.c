// C program to count frequency of elements in an array

#include <stdio.h>

void count_freq(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    arr[j] = -1;
                    count++;
                }
            }
            printf("The frequency of %d is %d\n", arr[i], count);
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    count_freq(arr, n);
    return 0;
}
