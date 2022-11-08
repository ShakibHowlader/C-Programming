#include<stdio.h>
int main()
{
    int n1[10][10],n2[10][10],result[10][10],r1,r2,c1,c2;

    scanf("%d%d",&r1,&c1);

    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {

        scanf("%d%d",&r1,&c1);

        scanf("%d %d",&r2,&c2);
    }
    //for first matrix
    for(int i=0 ; i<r1 ; i++)
    {

        for(int j=0 ; j<c1 ; j++)
        {

            scanf("%d",&n1[i][j]);
        }
    }
    //for second matrix
    for(int i=0 ; i<r2 ; i++)
    {

        for(int j=0 ; j<c2 ; j++)
        {
            scanf("%d",&n2[i][j]);
        }
    }

     //multiplying
        int sum = 0;
        for(int i=0; i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<c1;k++){
                    sum = sum + n1[i][k]*n2[k][j];
                }
                result[i][j] = sum;
                    sum = 0;
            }
        }

    //printing first matrix

    printf("\nFirst Matrix\n");
    for(int i = 0 ; i<r1 ; i++)
    {

        for(int j = 0 ; j<c1 ; j++)
        {

            printf("%d ",n1[i][j]);

        }
        printf("\n");
    }




        //printing second matrix

    printf("\nSecond Matrix\n");
    for(int i = 0 ; i<r2 ; i++)
    {

        for(int j = 0 ; j<c2 ; j++)
        {

            printf("%d ",n2[i][j]);

        }
        printf("\n");

    }

    //printing result matrix

    printf("\nResult Matrix\n");
    for(int i = 0 ; i<r1 ; i++)
    {

        for(int j = 0 ; j<c2 ; j++)
        {

            printf("%d ",result[i][j]);

        }
        printf("\n");

    }


    return 0;
}
