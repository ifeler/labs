#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int n = 1000;
main()
{ system("CLS"); 
float a[n+1],c ,b, x,h,s ;
int i;
c=-2;b=2;
x=c;
h=(b-c)/n;
for (i=0;i<=n;i++){
	a[i]=(1+2*x+x*x)/(5+2*x*x);
	if ((i==0) or (i==n)){
		s+=a[i]/2;
	}
	else s+=a[i];
	x+=h;
}
s*=h;
printf("%f",s);
printf("\n");	
system("PAUSE");
return 0;
	
}
