#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{    system("CLS"); 
     int S,n,i,v;
     printf("¬ведите n ");    scanf("%d",&n);
     v=1;
     for (S=0, i=1; i<=n; i++) {
            S+=i*v;
			v*=-1;
		}
     printf ("S=%d\n",S);
    system("PAUSE");
    return 0;
}

