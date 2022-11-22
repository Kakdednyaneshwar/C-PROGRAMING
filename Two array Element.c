#include <stdio.h>

int main()
{
   int x[2][3]={{5,6,8}, {3,5,7}};
   int y[2][3]={{5,7,8}, {4,6,8}};
   int z[2][3];
   int i,j;
   printf("x array element\n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d\t",x[i][j]);
       }
       printf("\n");
   }
   printf("y arrya element\n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d\t",y[i][j]);
       }
       printf("\n");
   }
   printf("addition z array element\n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
           z[i][j]=x[i][j]+y[i][j];
           printf("%d\t",z[i][j]);
       }
       printf("\n");
   }
    return 0;
}



