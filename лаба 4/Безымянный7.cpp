#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{    system("CLS"); 
     int S,n,i,m;
     
      printf("m=");    scanf("%d",&m);
     for (S=1, i=1; i<=m; i++) 
            S*=i;
			
     printf ("S=%d",S);
    system("PAUSE");
    return 0;
}

