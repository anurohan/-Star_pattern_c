#include <stdio.h>
int main()
{
    int n, i, j;
    printf("enter any number:...");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
// n=6
// ******
//  *****
//   ****
//    ***
//     **
//      *