#include <stdio.h>
int main() 
{
int n, i;
scanf("%d", &n);

   int a[n], even[n], odd[n];
    int e = 0, o = 0;
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0)
            even[e++] = a[i];
        else
            odd[o++] = a[i];
    }
    for(i = 0; i < e; i++)
        printf("%d ", even[i]);
    printf("\n");
    for(i = 0; i < o; i++)
        printf("%d ", odd[i]);
    return 0;
}