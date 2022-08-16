//#include <stdio.h>
//
//int main()
//{
//    int s, e;
//    int i, j;
//
//    do {
//        scanf("%d %d", &s, &e);
//        if (s < 2 || s>9 || e < 2 || e>9)
//            printf("INPUT ERROR!\n");
//    } while (s < 2 || s>9 || e < 2 || e>9);
//    for (j = 1; j < 10; j++)
//    {
//        if (s > e)
//        {
//            for (i = s; i >= e; i--)
//            {
//                printf("%d * %d = %2d   ", i, j, i * j);
//            }
//        }
//        else
//        {
//            for (i = s; i <= e; i++)
//            {
//                printf("%d * %d = %2d   ", i, j, i * j);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j,k=1;
    int n;
   
    scanf("%d", &n);

     int** m = (int**)malloc(sizeof(int*) *n);
     for (int i = 0; i < n; i++) {
         m[i] = malloc(sizeof(int) * n);
     }


    if (n < 0 || n > 100)
        return 0;
    for (i = 0; i < n; (i++,n--))
    {
        m[i][n] = k;
        k++;

        for (j = 0; j < n; j++)
        {
            printf("%d ", m[i][j]);
            if (n % n == 0)
                printf("\n");
        }
    }

    free(m);
    return 0;
}