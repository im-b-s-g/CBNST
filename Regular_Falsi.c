#include<stdio.h>
#include<math.h>
float fx(float x)
{
    return x*x*x-5*x+1;
}

int main()
{
    float x=0,x1=0;
    do{
        printf("Enter the values of x and x1 \n");
        scanf("%f %f", &x, &x1);

        if(fx(x)*fx(x1)<0)
        {
            break;
        }
        else
        {
            printf("Incorrect Values of x and x1 please Enter the values again. \n");
        }

    }while(1);
    float allErr = 0.001;
    int i=0;
    do
    {
        float x2 = ((x-(x-x1))*fx(x))/(fx(x)-fx(x1));
        if(fabs(fx(x2))<=allErr || i==4000)
        {
            printf("Value of x2 is %f and fx(x2) = %f \n", x2, fx(x2));
            break;
        }
        if(fx(x)*fx(x2)<0)
        {
            x1=x2;
        }
        else 
        {
            x=x2;
        }
        i++;
        printf("value of x = %f and x1 = %f on iteration %d: \n", x,x1,i);
    }while(1);
    
     return 0;

}