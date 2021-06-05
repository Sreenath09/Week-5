/* C Program to calculate the sum of square of first n odd numbers*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("Enter a num");
    scanf("%d", &n);
    while(i<=n)
    {
        if((i%2) != 0)
        {
            sum = sum+(i*i);
        }
        i++;
    }
    printf("%d", sum);

    return 0;

}

