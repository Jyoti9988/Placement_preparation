#include<stdio.h>
void main(){
    int i,j,n,m;
    printf("Enter rows and columns");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
        {
            if(j<=n+1-i || j>=n-1+i){
            printf("*");
            }
            else{
                printf(" ");

            }

        }
        printf("\n");
    }

}