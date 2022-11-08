#include<stdio.h>
int main()

{
    int mat[10][10],row,col,trans[10][10],i,j;
    scanf("%d %d",&row,&col);
    for(int i=0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            trans[j][i] = mat[i][j];
        }
    }
    for(int i=0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=0 ; i<col ; i++){
        for(int j = 0 ; j<row ; j++){
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }


    return 0;
}
