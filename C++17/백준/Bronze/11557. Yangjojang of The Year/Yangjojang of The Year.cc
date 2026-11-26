#include <stdio.h>
struct info
{
    char name[21];
    int drink;
};

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        info arr[101];
        int n;
        scanf("%d", &n);
        int max;
        int max_drink = -1;

        for (int i = 0; i < n; i++)
        {
            scanf("%s %d", arr[i].name, &arr[i].drink);
            if (max_drink < arr[i].drink)
            {
                max_drink = arr[i].drink;
                max = i;
            }
        }
        printf("%s\n", arr[max].name);
    }
}