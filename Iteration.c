#include<stdio.h>
#include<math.h>

float f(float x)
{
     return cos(x)-3*x+1;
}
float fi(float x)
{
      return (1+cos(x))/3;

}

int main()
{
    float x=0,x1=0;
    do{
    printf("Enter the value of x \n");
    scanf("%f", &x);

    if(fabs(fi(x))<1)
    {
        break;
    }
    else{
        printf("Invalid Values, Please enter the values again.\n");
    }
    }while(1);

    int i=0;
    do
    {
        x1 = fi(x);
        x=x1;
        i++;

        if(f(x)<0.000001 || i==200)
        {
            break;
        }
        printf("the value of x = %f, f(x) = %f , fi(x)= %f on iteration %d \n",x,f(x),fi(x),i);

    }while(1);

     printf("the value of x = %f, f(x) = %f , fi(x)= %f on iteration %d \n",x,f(x),fi(x),i);
     return 0;
}