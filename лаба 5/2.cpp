#include<stdio.h>
#include<math.h>
int main (){
	float a,x,b,c,min,max,h,y;
	a=2.14;
	b=-4.21;
	c=3.25;
	min=1000000;
    max=-1000000;
    h=0.5;
    x=-13.5;
    while (x<=-4.5){
    	y=(a*pow(x,2)+b*x+c)*sin(x);
    	if (y<min) min=y;
    	if (y>min) max=y;
    	x+=h;
	}
	printf("max=%f, min=%f",max,min);
}

