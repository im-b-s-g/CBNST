#include<stdio.h>
#include<math.h>

float functionAbs(float x, float x1)
{
        return fabs(x1-x);
}


int main()
{
    float x=0,x1=0;
    
    printf("Enter the value x and approx value x1 \n");
    scanf("%f %f", &x,&x1);

    printf("Absolute Value: %f\n", functionAbs(x,x1) );
    printf("Realtive Value: %f \n", functionAbs(x,x1)/x);
    printf("Percentage Value: %f \n",(functionAbs(x,x1)/x)*100 );

return 0;
}