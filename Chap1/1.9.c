#include<stdio.h>


int main()
{
    
 //Converting from Celsius to Fahrenheit.
int c = 50;
float f;
f = (9*c/5) +32;
printf("Temp in F is %f\n",f);

//Converting from Fahrenheit to Celsius.
int ferf = 122;
float cel;
cel = (f-32)*5/9;
printf("TEmp in c is %f\n",cel);        
}
