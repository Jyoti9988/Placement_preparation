#include<stdio.h>
void main(){
    int i,j,n,k=1;
    printf("Enter the number of rows and column");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>=n+1-i && j<=n-1+i && k){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
          printf("\n");
    }
}