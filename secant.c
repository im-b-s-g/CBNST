#include<stdio.h>
#include<math.h>

float f(float x)
{
    return pow(x,3)-x+1;
}

int main()
{
    float x0,x1,x2;
    float allErr=0.0001;
    int i=0;
    do{
    printf("Input the Interval x0 and x1 \n");
    scanf("%f %f",&x0,&x1);
    if(f(x0) != f(x1))
    {
        break;
    }
    else{
        printf("Wrong Intervals, Try Again!\n");
    }
    }while(1);

    do{
        x2 = x1- ((x1-x0)/ (f(x1)-f(x0)))*f(x1);
        printf("Value of x2 = %f on iteration %d \n", x2,++i);
        if(f(x2)<=allErr)
        {
            break;
        }
        else
        {
            x0=x1;
            x1=x2;
        }
     
    }while(1);
    
    return 0;
}