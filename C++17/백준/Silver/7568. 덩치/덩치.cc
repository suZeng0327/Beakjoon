#include <stdio.h>

struct info
{
    int kg;
    int h;
};

int main()
{
    info arr[51];
    int n;
    scanf("%d", &n);

    int k_arr[51] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].kg, &arr[i].h);
    }

    for (int i = 0; i < n; i++)
    {
        int k = 0; 
        for (int j = 0; j < n; j++)
        {
            if (i == j) continue;
            if (arr[j].kg > arr[i].kg && arr[j].h > arr[i].h)
            {
                k++;
            }
        }
        k_arr[i] = k + 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", k_arr[i]);
    }
    printf("\n");

    return 0;
}