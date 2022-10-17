#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{    system("CLS"); 
     int n,i;
     float S;
     for (S=0, i=1; i<=25; i++) 
            S+=sin(i);     
     printf ("S=%f\n",S);
    system("PAUSE");
    return 0;
}

