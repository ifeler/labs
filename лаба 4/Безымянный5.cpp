#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{    system("CLS"); 
     int n,v;
     float S,i;
      printf("¬ведите n ");    scanf("%d",&n);
      v=1;
     for (S=0, i=0.18; i<=0.36; i=i+0.02) {
			S+=pow((i*n),v);  
			v+=1 ; 
		}
     printf ("n=%d S=%f",n,S);
    system("PAUSE");
    return 0;
}

