#include <stdio.h>
#include <string.h>
char largest(char b[], int x, int l)
{

    if (x == -1)
        return l;
    if (b[x] > l)
    {
        l = b[x];
    }
    l = largest(b, x - 1, l);
    return l;
}
int main()
{
    int n;
    printf("\nenter the number of elements:-");
    scanf("%d", &n);
    char a[n];
    printf("\nEnter the elements:-");
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);
    }
    printf("\n%c is largest", largest(a, n - 1, 0));
}