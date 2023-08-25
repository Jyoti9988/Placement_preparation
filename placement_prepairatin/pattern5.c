#include<stdio.h>
void main(){
    int i,j,n,k;
    printf("Enter the number for rows and columns");
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++){
        for(j=1;j<=k;j++){
            if(j>=n+1-i && j<=n-1+i)
            {
            printf("*");
            }
            else{
            printf(" ");
            }
        }
        printf("\n");
    }
}