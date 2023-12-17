#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

#define SIZE 10

int main()
{       
        float a[SIZE][SIZE],X[SIZE], ratio;
        int n=0;
        printf("Enter the number of unknowns.\n");
        scanf("%d", &n);

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n+1 ;j++)
            {
                printf("A[%d][%d] = ", i,j);
                scanf("%f", &a[i][j]);
                printf("\n");
            }
        }
    
        for(int i=1; i<=n-1; i++)
        {
            if( a[i][i]==0.0)
                {
                    printf("Mathematical Error.\n");
                    exit(0);
                }
            for(int j= i+1; j<=n;j++)
            { 
                ratio = a[j][i]/a[i][i];
                for(int k=1; k<=n+1;k++)
                {
                    a[j][k] = a[j][k] - a[i][k]*ratio;
                }
            }
        }
     
        X[n] = a[n][n+1]/a[n][n];
    
        for(int i=n-1 ; i>=1 ; i--)
        {
            X[i] = a[i][n+1];
            for(int j=i+1;j<=n;j++)
            {
                X[i] = X[i]-(a[i][j]*X[j]);
            }
            X[i] = X[i]/a[i][i];
        }

        printf("Solution\n");
        for(int i=1;i<=n;i++)
        printf(" %c = %.3f \n",'W'+i, X[i]);
    return 0;
}