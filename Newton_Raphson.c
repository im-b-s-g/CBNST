#include<stdio.h>
#include<math.h>

float f(float x)
{
    return 3*x-cos(x)-1;
}

float g(float x)
{
    return 3 + sin(x); 
}

int main()
{
        float x0=0,x1=0;
        do{
    printf("Enter a value for x and x1\n");
    scanf("%f %f", &x0, &x1);

            if(f(x0)*f(x1)<0)
            {
                x0=(x0+x1)/2;
                break;
            }
        }while(1);

    float allErr = 0.001;
    float x = 0;
    int i=0;
        do
        {
            float x = x0 - f(x0)/g(x0);
            if(f(x)<=allErr ||  i==200)
            {
                break;
            }
            else
             x0=x;
             i++;
            printf("the value of x is: %f and f(x) = %f, g(x) = %f \n", x,f(x),g(x));
        }while(1);

    printf("the value of Root x is: %f and f(x) = %f, g(x) = %f\n", x0,f(x0),g(x0));
    
    

    return 0;
}