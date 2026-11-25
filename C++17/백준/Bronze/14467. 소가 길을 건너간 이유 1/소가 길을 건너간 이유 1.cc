#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num_arr[101];
    int pos_arr[101];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &num_arr[i], &pos_arr[i]);
    }

    int last_pos[11];
    for (int i = 1; i <= 10; i++)
    {
        last_pos[i] = -1;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int cow = num_arr[i]; 
        int pos = pos_arr[i]; 

        if (last_pos[cow] == -1)
        {
            last_pos[cow] = pos;
        }
        else if (last_pos[cow] != pos)
        {
            cnt++;
            last_pos[cow] = pos; 
        }
    }

    printf("%d\n", cnt);
    return 0;
}