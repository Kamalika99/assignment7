#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, num = 0, n = 0;
    char str[100], sub[100];
    printf("enter the elements of string:");
    gets(str);
    printf("enter the substring to be checked:");
    gets(sub);
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; str[j] != '\0'; j++)
        {
            if (sub[j] == str[i])
                num = 1;
            else
                num = 0;
            break;
        }
        if (num == 1)
            n = 1;
    }
    if (n == 1)
        printf("it is substring");
    else
        printf("not substring");
}