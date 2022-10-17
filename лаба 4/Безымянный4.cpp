#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{    system("CLS"); 
     
     float i,S;
      
      
     for (S=0, i=0.1; i<=2.0; i=i+0.2) {
			S+=log(i);  
		
			 
		}
     printf (" S=%f",S);
    system("PAUSE");
    return 0;
}

