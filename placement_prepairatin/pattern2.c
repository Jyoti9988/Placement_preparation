#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter row and column");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=n+1-i){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}