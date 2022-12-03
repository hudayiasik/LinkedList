#include <stdio.h>
#include <String.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int l, int r)
{
    int i;
    if (l == r)
        printf("-----%s---r:%d--\n", a,r);
    else
    {
        for (i = l; i <= r; i++)
        {
            swap((a + l), (a + i));
            printf("1: i: %d l: %d r: %d - %s \n", i, l, r, a);
            permute(a, l + 1, r);
            printf("2: i: %d l: %d r: %d - %s \n", i, l, r, a);
            swap((a + l), (a + i)); // backtrack
            printf("3: i: %d l: %d r: %d - %s \n", i, l, r, a);
        }
    }
}

int main()
{
    char str[] = "ABC";
    int n = strlen(str);
  //  printf("%d\n", n);
    permute(str, 0, n - 1);
    //swap(str + 0, str + 2);
   // printf("%s", str);
    return 0;
}