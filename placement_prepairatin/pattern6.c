#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter the number of rows and column");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>=n+1-i){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
          printf("\n");
    }
}