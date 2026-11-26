#include <stdio.h>
#include <algorithm>
using namespace std;

struct score
{
    int num = 0;
    int score;
};

int main()
{
    score arr[8];
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i].score);
        arr[i].num = i + 1;
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7 - i; j++)
        {
            if(arr[j].score > arr[j+1].score)
            {
                int temp1 = arr[j].num;
                arr[j].num = arr[j + 1].num;
                arr[j + 1].num = temp1;

                int temp2 = arr[j].score;
                arr[j].score = arr[j + 1].score;
                arr[j + 1].score = temp2;
            }
        }
    }

    int top_num[5];
    for (int i = 0; i < 5; i++)
    {
        top_num[i] = arr[i + 3].num;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if(top_num[j] > top_num[j+1])
            {
                int temp = top_num[j];
                top_num[j] = top_num[j + 1];
                top_num[j + 1] = temp;
            }
        }
    }
        sum = arr[3].score + arr[4].score + arr[5].score + arr[6].score + arr[7].score;
    printf("%d\n%d %d %d %d %d", sum, top_num[0], top_num[1], top_num[2], top_num[3], top_num[4]);
}