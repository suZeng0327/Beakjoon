#include <stdio.h>

struct grade
{
    int c;
    double g;
};

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int sum_c = 0;
        double sum_cg = 0.0; 
        int n;
        scanf("%d", &n);
        while (n--)
        {
            grade item;
            scanf("%d %lf", &item.c, &item.g);
            sum_c += item.c;
            sum_cg += item.c * item.g;
        }
        printf("%d %.1lf\n", sum_c, sum_cg / sum_c);
    }
    return 0;
}