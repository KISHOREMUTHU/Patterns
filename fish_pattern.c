//# Patterns
//C pattern programs

[8:37 PM, 12/26/2020] Kishore M 🥋🈸: //Fish pattern


#include<stdio.h>
int main(){
     int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
           printf(" ");}
        for(j=1;j<=2*i-1;j++){
           printf("*");}
        printf("\n");}
      for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
           printf(" ");}
        for(j=1;j<=2*i-1;j++){
           printf("*");}
        printf("\n");} 
        for(i=2;i<=n/2+1;i++){
          for(j=1;j<=n-i;j++){
           printf(" ");}
          for(j=1;j<=2*i-1;j++){
             printf("*");}
            printf("\n");}   
     
    }
    
