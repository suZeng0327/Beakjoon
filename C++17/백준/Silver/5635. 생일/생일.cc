#include <stdio.h>
struct birth
{
    char name[16];
    int d;
    int m;
    int y;
};

int main()
{
    birth arr[101];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", arr[i].name, &arr[i].d, &arr[i].m, &arr[i].y);
    }

    int old = 0, young = 0;
    for (int i = 0; i < n; i++)
    {
       
        if (arr[i].y < arr[old].y)
        {
            old = i;
        }
        else if (arr[i].y == arr[old].y)
        {
            if (arr[i].m < arr[old].m)
            {
                old = i;
            }
            else if (arr[i].m == arr[old].m)
            {
                if (arr[i].d < arr[old].d)
                {
                    old = i;
                }
            }
        }

       
        if (arr[i].y > arr[young].y)
        {
            young = i;
        }
        else if (arr[i].y == arr[young].y)
        {
            if (arr[i].m > arr[young].m)
            {
                young = i;
            }
            else if (arr[i].m == arr[young].m)
            {
                if (arr[i].d > arr[young].d)
                {
                    young = i;
                }
            }
        }
    }

    printf("%s\n%s", arr[young].name, arr[old].name);
}