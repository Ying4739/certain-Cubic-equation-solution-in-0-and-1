#include <stdio.h>

int main()
{
    float y=1.0, x, HL = 1.0, LL = 0;
    while(y>0.000001)
    {
        x = (HL+LL)/2;
        y = x*x*x+x-1;
        if(y == 0)
        printf("x = %f\n", x);
        else
        {
         if(y>0)
         {
            HL = x;
         }
         else
         {
           LL = x; 
           y = -(x*x*x+x-1);
         }
        }
    }
    printf("x = %f\n", x);
    printf("%f",y);
    return 0;
}
