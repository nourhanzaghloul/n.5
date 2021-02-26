#include <stdio.h>
#include <stdlib.h>

int factorial(int);


int main()
{
    int num_1=5,result=0;
    result= factorial(num_1);
    printf("%d",result);
    return 0;
}
int factorial(int x)

{

    int res=1;
    for(;x!=0;x--)
    res*=x;
    return res;
}
