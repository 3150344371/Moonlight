#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define I 20
#define R 350
int main()
{
        int i, j, e;
        int a;
        long time;
        system("title 作者:小智");
        for (i = 1, a = I; i<I / 2; i++, a--)
        {
                for (j = (int)(I - sqrt(I*I - (a - i)*(a - i))); j>0; j--)
                        printf(" ");
                for (e = 1; e <= 2 * sqrt(I*I - (a - i)*(a - i)); e++)
                        printf("\3");
                for (j = (int)
                        (2 * (I - sqrt(I*I - (a - i)*(a - i)))); j>0; j--)
                        printf(" ");
                for (e = 1; e <= 2 * sqrt(I*I - (a - i)*(a - i)); e++)
                        printf("\3");
                printf("\n");
        }
        for (i = 1; i< 49 ;i++)
        {
                if (i == 20)
                {
                        printf("  Xxx： 知道吗？  爱上你 是我 此生最大的  幸运");
                        i+=15;
                }       
                printf("\3");
        }
        printf("\n");
        for (i = 1; i <= R / 2; i++)
        {
                if (i % 2 || i % 3)
                        continue;
                for (j = (int)(R - sqrt(R*R - i*i)); j>0; j--)
                        printf(" ");
                for (e = 1; e <= 2 * (sqrt(R*R - i*i) - (R - 2 * I)); e++)
                        printf("\3");
                printf("\n");
        }
}