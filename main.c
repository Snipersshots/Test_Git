#include <stdio.h>
#include <stdlib.h>
#include "Arithmatic_op.h"
int main()
{
    int x,y;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    printf("Enter the value of y = ");
    scanf("%d",&y);
    int z= SUM(x,y);
    printf("The sum= %d\n",z);
    int w =SUB(x,y);
    printf("The sub= %d\n",w);

    return 0;
}

