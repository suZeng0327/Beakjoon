#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[100001];
    int max = -100000000;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
        max = sum;
    }


  
    for (int i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];
        if (sum > max)
        {
            max = sum;
        }
    }

    printf("%d\n", max);
    return 0;
}