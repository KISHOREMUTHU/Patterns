//# Patterns
//C pattern programs
//Diamond inside triangles
#include<stdio.h>
int main(){
     int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
       printf("*");}
    printf("\n");
    for(i=n-1;i>=1;i--){
         for(j=1;j<=i;j++){
           printf("*");}
         for(j=1;j<=2*(n-i)-1;j++){
           printf(" ");}
          for(j=1;j<=i;j++){
         printf("*");}
        printf("\n");}
        
      for(i=2;i<=n-1;i++){
         for(j=1;j<=i;j++){
           printf("*");}
         for(j=1;j<=2*(n-i)-1;j++){
           printf(" ");}
          for(j=1;j<=i;j++){
         printf("*");}
        printf("\n");}
        
          for(i=1;i<=2*n-1;i++){
          printf ("*");}}
