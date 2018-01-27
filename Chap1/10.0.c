/******************************************************************************/
#include<stdio.h>
#include<math.h>

int main()
{
    
 //Area(A) of the triangle 
    float A,S,a,b,c;
    a = 20;
    b = 30;
    c = 40;
    S = (a+b+c)/2;
    printf("%f\n",S);
    A= sqrt(S*(S-a)*(S-b)*(S-c));
    printf("The area of triangle is %f",A);
}


