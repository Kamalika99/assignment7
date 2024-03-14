#include <stdio.h>
#include <string.h>
int main(){
        char a[10];
        printf("Enter string \n");
        gets(a);
         printf("Enter a character");
         char k;
         scanf("%c",&k);
         int sum=0;
         for(int i=0;i<strlen(a);i++){
            if(a[i]==k){
                sum++;
            }
         }
         printf("The frequency of the character %c = %d",k,sum);
}