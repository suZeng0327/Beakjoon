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
    while (s_num--)
    {
        int gender, num;
        scanf("%d %d", &gender, &num);

        if (gender == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if ((i + 1) % num == 0)
                {
                    sw[i] = !sw[i];
                }
            }
        }
        else if (gender == 2)
        {
            sw[num - 1] = !sw[num - 1];
            int d = 1;
            while (num - 1 - d >= 0 && num - 1 + d < n)
            {
                if (sw[num - 1 - d] == sw[num - 1 + d])
                {
                    sw[num - 1 - d] = !sw[num - 1 - d];
                    sw[num - 1 + d] = !sw[num - 1 + d];
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
        if ((i + 1) % 20 == 0)
        {
            printf("%d\n", sw[i]);
        }
        else
            printf("%d ", sw[i]);
    }
}