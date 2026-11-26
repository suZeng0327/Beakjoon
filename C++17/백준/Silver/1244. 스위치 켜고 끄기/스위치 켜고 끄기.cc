#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sw[101];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sw[i]);
    }

    int s_num;
    scanf("%d", &s_num);

    for (int i = 0; i < s_num; i++)
    {
        int gender, num;
        scanf("%d %d", &gender, &num);

        if (gender == 1)
        {
            for (int j = 0; j < n; j++)
            {
                if ((j + 1) % num == 0)
                {
                    sw[j] = !sw[j];
                }
            }
        }
        else
        {
            int center = num - 1;
            sw[center] = !sw[center];

            int d = 1;
            while (center - d >= 0 && center + d < n)
            {
                if (sw[center - d] == sw[center + d])
                {
                    sw[center - d] = !sw[center - d];
                    sw[center + d] = !sw[center + d];
                    d++;
                }
                else
                {
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", sw[i]);
        if ((i + 1) % 20 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}