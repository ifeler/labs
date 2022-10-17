#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{    system("CLS"); 
     int S,n,i,m;
     
      
     for (S=1, i=2; i<=12; i+=2) {
     	
		 S*=i;
	 }
            
			
     printf ("S=%d",S);
    system("PAUSE");
    return 0;
}

