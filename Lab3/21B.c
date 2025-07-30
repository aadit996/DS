#include <stdio.h>
void main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &arr[i]);
    }

    int num, temp, count = 0, index;
    printf("Enter number to be replaced  : ");
    scanf("%d", &num);

    printf("Enter number to be added  : ");
    scanf("%d", &temp);

    int j;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == num)
        {
            count++;
            index = j;
            break;
        }
    }

    if (count == 0)
    {
        printf("Number not found");
    }
    else
    {
        arr[index] = temp;

        for (int i = 0; i < n; i++)
        {
            printf("%d\n", arr[i]);
        }
    }
}
