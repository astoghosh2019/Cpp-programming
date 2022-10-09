#include<stdio.h>
int main()
{
    int a[77][77],b[77][77],i,j,x,y,sum1=0,sum2=0,sum3;
    printf("ENTER THE ORDER OF FIRST MATRIX::\n");
    scanf("%d",&x);
    printf("ENTER THE ORDER OF SECOND MATRIX::\n");
    scanf("%d",&y);
    printf("ENTER THE ELEMENT WITH ROW ORDERWISE FOR FIRST MATRIX::\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
          scanf("%d",&a[i][j]);
    }
     printf("ENTER THE ELEMENTS WITH ROW ORDERWISE FOR SECOND MATRIX::\n");
    for(i=0;i<y;i++)
    {
        for(j=0;j<y;j++)
          scanf("%d",&b[i][j]);
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
        {
            if(j==i)
              sum1=sum1+a[i][j];
        }
}
    for(i=0;i<y;i++)
    {
        for(j=0;j<y;j++)
        {
            if(j==i)
              sum2=sum2+b[i][j];
        }
    }
    printf("THE SUM OF DIGONAL ELEMENTS FOR 1ST MATRIX IS::=%d\n",sum1);
    printf("THE SUM OF DIGONAL ELEMNT FOR THE SECOND MATRIX::=%d\n",sum2);
    sum3=sum1+sum2;
    printf("THE TOTAL SUM OF THE DIGONAL ELEMENTS IS ::=%d,sum3");
    return 0;
}
