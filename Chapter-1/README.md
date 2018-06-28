Ques-1: Write a program in the following form:
First line: "Your name"
Second line: "Door No., Street" 
Third line: "City, Pincode"
```
#include<stdio.h>
int main()
{
    printf("First  : Your name\n");
    printf("Second : Door no., Street\n");
    printf("Third  : City, Pincode");
    return 0;
}
```
Ques-2: Modify the above program to provide border lines to the address
```
#include<stdio.h>
int main()
{
    printf(" _________________________\n");
    printf("|First  : Your name       |\n");
    printf("|Second : Door no, Street |\n");
    printf("|Third  : City, Pincode   |\n");
    printf("|_________________________| ");
    return 0;
}
```
Ques-3: Write a program using one print statement to print the pattern of asterisks as shown below:
```
*
**
***
****
```
```
#include<stdio.h>
int main()
{
    printf("*\n * *\n* * *\n * * * *\n ");
    return 0;
}
```
Ques-4: Write a program that will print the following figure using suitable characters.
```
 ___________                     _____________
|           |                   |             |
|           |                   |             |
|           |   >----------->   |             |
|___________|                   |_____________|
```
```
#include<stdio.h>
int main()
{
    printf(" ___________                     _____________\n");
    printf("|           |                   |             |\n");
    printf("|           |                   |             |\n");
    printf("|           |   >----------->   |             |\n");
    printf("|___________|                   |_____________|\n");
    return 0;
}
```
Ques-5: Given the radius of a circle, write a program to compute and display its area. Use a symbolic constant to define the π value and assume a suitable value for radius. 
```
#include<stdio.h>
#define PI 3.14
float area, radius = 4;
int main()
{
    area = radius*radius*PI;
    printf("The area of circle is %.2f cm2 with radius %.2f cm.", area,radius);
    return 0;
}
```
Ques-6: Write a program to output the following multiplication table.
5x1=5
5x2=10
...
5x10=50
```
#include<stdio.h>
int main()
{
	int counter=1,number=5;
	while(counter!=10){
		printf("5x%d=%d",counter,counter*number);
		counter+=1;
	}
	return 0;
}
```
Ques-7: Given the two integers 20 and 10, write a program that uses a function add() to add these two numbers and sub()	to find the difference of these two numbers and then display the sum and difference in the following form:
20 + 10 = 30
20 - 10 = 10 
```
#include<stdio.h>
int sub(int x, int y){
	return x-y;
}
int add(int x, int y){
	return x+y;
}
int main()
{
	int a = 20, b = 10;
	int c, d;
	c = add(a, b);
	d = sub(a, b);
	printf("20 + 10 = %d\n", c);
	printf("20 - 10 = %d", d);
	return 0;
}
```
Ques-8: Given the values of three variables a,b and c. Write a program to compute and display the value of x, where
x = a/(b-c)
Cases: a = 250 b = 85 c = 25
       a = 300 b = 70 c = 70
```
#include<stdio.h>
int main()
{
	int a = 250, b = 85, c= 25 ;
	printf("Ans is %d\n",a/(b-c)); //4
	a = 300; b = 70; c = 70;
	printf("Ans is %d\n",a/(b-c)); //Floating point core dumped
	return 0;
}
```
Ques-9: Relationship between Celsius and Fahrenheit is governed by the formula F = 9C/5+32
Write a program to convert the temperature from one unit to another.
```
#include<stdio.h>
int main()
{
	float c = 50.0, f;
	//Converting from Celsius to Fahrenheit.
	f = (9*c/5) +32;
	printf("Temp in F is %.2f\n",f);

	f = 122;
	c = (f-32)*5/9;
	//Converting from Fahrenheit to Celsius.
	printf("Temp in ॰c is %.2f\n",c);
}
```
Ques-10: Area of the triangle is given by the formula √S(S-a)(S-b)(S-c), where 2S = a + b + c.
Write a program to compute the area of the triangle given the values of a,b and c.
```
#include<stdio.h>
#include<math.h>
int main()
{
    float a = 20, b = 30, c = 40, A, S;
    S = (a+b+c)/2;
    A = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("The area of triangle is %f",A);
}
```
Ques-11: Distance between two points(x1,x2) and (y1,y2) is governed by the formula D^2 = (x2-x1)^2 + (y2-y1)^2
Write the program to compute D given the coordinates of the point
```
#include<stdio.h>
#include<math.h>
int main()
{ 
	float x1,x2,y1,y2,D;
	printf("Enter the value of x1, x2, y1, y2:");
	scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
	D = sqrtf(pow((x2-x1),2) + pow((y2-y1),2));   	//Formula
	printf("Value of D: %f", D);
	return 0;
}
```
Ques-12: A point on the circumference of a circle whose center is (0,0) is (4,5). Write a program to compute perimeter and area of the circle.
```
#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{ 
	float peri, area;
	float x1=0,x2=4,y1=0,y2=5,D;
	D = sqrtf(pow((x2-x1),2) + pow((y2-y1),2));  //Formula
	peri = 2 * pi * D;
	area = pi * D * D;
	printf("Perimeter: %.2f, Area: %.2f \n", peri, area);
	return 0;
}
```
Ques-13: The line joining (2,2) and (5,6) which lie on the circumference of a circle is the diameter of the circle. Write a program to compute the area of the circle. 
```
#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{ 
	float peri, area;
	float x1=2,x2=5,y1=2,y2=6,D;
	D = sqrtf(pow((x2-x1),2) + pow((y2-y1),2));  //Formula
	D = D/2; 				     //Diameter into radius
	area = pi * D * D;
	printf("Area: %.2f \n", peri, area);
	return 0;
}
```
Ques-14: Write a program to display the equation of a line in the form ax + by = c for a = 5, b = 8 and c = 18
```
#include<stdio.h>
int main()
{
	int a = 5, b = 8, c = 18;
	printf("%dx + %dy = %d", a, b, c);
	return 0;
}
```
Ques-15: Write a program to display the following simple arithemetic calculator(x = , y = , sum = , diff = , mul = , div = )
```
#include<stdio.h>
int main()
{
	int x, y;
	printf("Enter the value of X & Y:" );
	scanf("%d %d", &x, &y);
	printf("X:%d Y:%d Sum:%d Diff:%d Mul:%d Div:%d", x, y, x+y, x-y, x*y, x/y);
	return 0;
}
```


