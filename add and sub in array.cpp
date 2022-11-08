#include<stdio.h>
int main()
{
    int n1[10][10],n2[10][10],res[10][10],row,col,n,i,j;
    scanf("%d %d",&row , &col);

    //scanning first matrix
    for(int i=0 ; i<row ; i++){
        for(int j=0; j<col ;j++){
            scanf("%d",&n1[i][j]);
        }

    }

    //scanning second matrix
    for(int i=0 ; i<row ; i++){
        for(int j=0; j<col ;j++){
            scanf("%d",&n2[i][j]);
        }

    }

    //addition

    for(int i=0 ; i<row ; i++){
        for(int j=0; j<col ;j++){
            res[i][j] = n1[i][j] + n2[i][j];
        }

    }

    //subtraction

    for(int i=0 ; i<row ; i++){
        for(int j=0; j<col ;j++){
            res[i][j] = n1[i][j] - n2[i][j];
        }

    }



     //printing first matrix

    printf("\nFirst Matrix\n");
    for(int i = 0 ; i<row ; i++)
    {

        for(int j = 0 ; j<col ; j++)
        {

            printf("%d ",n1[i][j]);

        }
        printf("\n");
    }
    //printing first matrix

    printf("\nSecond Matrix\n");
    for(int i = 0 ; i<row ; i++)
    {

        for(int j = 0 ; j<col ; j++)
        {

            printf("%d ",n2[i][j]);

        }
        printf("\n");
    }

//printing result matrix

    printf("\nResult Matrix\n");
    for(int i = 0 ; i<row ; i++)
    {

        for(int j = 0 ; j<col ; j++)
        {

            printf("%d ",res[i][j]);

        }
        printf("\n");

    }

    return 0;
}
