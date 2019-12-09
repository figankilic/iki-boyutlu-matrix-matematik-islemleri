#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[2][2] ={{1,2},{1,1}};
	int b[2][2] ={{1,1},{1,2}};
	int c[2][2] ;
    int bt[2][2];
    int z = (b[0][0] * b[1] [1]) - (b[0] [1] * b[1][0]);
    printf("z=%d\n",z);
    bt[0][0] = b[0][0];
    bt[1][1] = b[1][1];
    bt[0][1] = -1 * b[0][1];
    bt[1][0] = -1 * b[1][0];
    printf("bt:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
             bt[i][j] = 1 / z * bt[i][j];
             printf("%d\t",bt[i][j]);
        }
        printf("\n");
    }
    printf("bolme: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int topla = 0;
            for (int k = 0; k < 2; k++)
            {
                topla = topla + a[i][k] * bt[k][j];
            }
            c[i][j] = topla;
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    printf("carpma: \n");
    for(int i=0;i<2;i++)
    {
		for(int j=0;j<2;j++)
        {
			int topla=0;
			for(int k=0;k<2;k++)
            {
				topla=topla+a[i][k]*b[k][j];
			}
			c[i][j]=topla;
            printf("%d\t",c[i][j]);


        }
        printf("\n");
     }
    printf("toplama: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            int toplama=0;
            toplama=toplama+a[i][j]+b[i][j];
            printf("%d\t",toplama);
        }
        printf("\n");
    }
    printf("cikarma: \n");
    for(int i=0;i<2;i++)
    {
		for(int j=0;j<2;j++)
        {
            int cikarma=0;
            cikarma=cikarma+a[i][j]-b[i][j];
            printf("%d\t",cikarma);
        }
        printf("\n");
    }
    printf("1.dizinin transpozesi: \n");
    for(int j=0;j<2;j++)
    {
		for(int i=0;i<2;i++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("2.dizinin transpozesi: \n");
    for(int j=0;j<2;j++)
    {
		for(int i=0;i<2;i++)
        {
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}


