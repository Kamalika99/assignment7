#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    printf("Enter a string");
    gets(a);
    int k=0;
    for(int i=0;i<strlen(a);i++){
        if((a[i]>='a'&&a[i]<='z') || (a[i]>='A'&&a[i]<='Z'))
        {
        a[k]=a[i];
        k++;
        }
    }
    a[k]='\0';
    int i=0;
    for(i=0;i<k;i++)
    {
    printf("%c",a[i]);
    }

}