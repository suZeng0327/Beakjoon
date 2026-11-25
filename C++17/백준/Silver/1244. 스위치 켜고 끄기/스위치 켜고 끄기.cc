#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sw[101];
    
    for (int i = 1; i <= n; i++)
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
            for (int j = 1; j <= n; j++)
            {
                if (j % num == 0) 
                {
                    sw[j] = !sw[j];
                }
            }
        }
        else 
        {
            sw[num] = !sw[num]; 

            int d = 1; 
            while (num - d >= 1 && num + d <= n) 
            {
                if (sw[num - d] == sw[num + d])
                {
                    sw[num - d] = !sw[num - d];
                    sw[num + d] = !sw[num + d];
                    d++; 
                }
                else
                {
                    break; 
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", sw[i]);
        if (i % 20 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}