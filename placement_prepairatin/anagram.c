#include<stdio.h>
#include<string.h>
void main(){
    char s[100],c[100];
    printf("Enter your first string");
    gets(s);
    printf("enter your second string");
    gets(c);
    if(strlen(s)!=strlen(c)){
        printf("anagram not possible");
    }
    
}