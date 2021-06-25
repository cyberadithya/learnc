//
// Created by adithya on 6/25/21.
//

#include <stdio.h>
int main(void)
{
    int n;
    int l;
    int i;

    do {
        printf("enter number between 1 and 9 : ");
        scanf("%d", &n);
    }
    while(n > 1 && n < 10);

    // outer loop
    for ( i = 1; i <= n; i++)
    {
        //inner loop to print the #
        for (l = n; l > 0; l--)
        {
            if(i<l)
            {
                printf(".");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
