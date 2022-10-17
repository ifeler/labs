#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{    system("CLS"); 
     int n,i;
     float S;
      printf("¬ведите n ");    scanf("%d",&n);
     for (S=0, i=2; i<=n*2; i+=2) 
            S+=tan(i);    
     printf ("S=%f",S);
    system("PAUSE");
    return 0;
}

