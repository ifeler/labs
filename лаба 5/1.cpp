#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
 
    double pi = 0;
    for (int i = 0; i < n; i++)
    {
    pi += ((pow(-1, i)) / (2 * i + 1));
    }
    pi *= 4;
 
    
    printf("pi=%f", pi);
    return 0;
}
