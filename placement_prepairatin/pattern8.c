 #include<stdio.h>
 void main(){
    int i,j,n,m,k;
    
    printf("enter number of rows and columns");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
         k=1;
        for(j=1;j<=m;j++){
            if( j>=n+1-i && j<=n-1+i){
            printf("%d",k);
           if( j<4?k++:k--);

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

 }