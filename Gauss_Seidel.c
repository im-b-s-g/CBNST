// Q Gauss jordan 
// x + y + z = 9 ,  2x - 3y + 4z = 13,  3x + 4y + 5z = 40
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>


float function1( float y, float z)
{
    return (17-y+2*z)/20;
}

float function2( float x, float z)
{
    return (-18-3*x+z)/20;
}

float function3(float y, float x)
{
    return (25-2*x+3*y)/20;
}


int main()
{
    float x0 =0,  y0=0, z0 = 0, x1,y1,z1,e1,e2,e3, e = 0.00001;
    int i=0;
    do{

        x1 = function1(x0, z0); 
        y1 = function1(x1, z0); 
        z1 = function1(x1, y1);

        e1 = fabs(x0-x1);
        e2 = fabs(y0-y1);
        e3 = fabs(z0-z1);


        printf("X = %f \t Y = %f \t Z = %f in iteration %d \n",x1,y1,z1,i+1);
        
        i++;
        x0=x1;
        y0=y1;
        z0=z1;

    }while(e1>e && e2>e &&e3>e || i<50);
    
}