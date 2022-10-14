<details>
<summary><h3>Ques-1 Write a program to determine and print the sum of the following harmonic series for a given value of n.
1 + 1/2 + 1/3 --- 1/n</h3></summary>

```
#include<stdio.h>
int main()
{
  double sum = 0, counter = 1, n;
  scanf("%lf", &n);
  while(counter<=n)
  {
    sum += 1/counter;
    counter++;
  }
  printf("Sum:%lf", sum);
  return 0;
}
```
</details>
<details>
<summary><h3>
Ques-2 Write a program to read the price of an item in decimal form (like 15.95) and print it (like 1595 paise).</h3></summary>
```
#include<stdio.h>
int main()
{
  float price;
  scanf("%f", &price);
  printf("%.0f paise", price*100);
  return 0;
}
```
</details>
<details>
<summary><h3>
Ques-3 Write a program that prints even numbers from 1 to 100.</h3></summary>
```
#include<stdio.h>
int main()
{
  int num = 1;
  while(num<=100){
    if(num%2==0)
      printf("%d\t", num);
    num++;
  }
  return 0;
}
```
</details>
<details>
<summary><h3>
Ques-4 Write a program that requests two float type numbers from the user and then divides the first number by the second and display the result along with the numbers.</h3></summary>
```
#include<stdio.h>
int main()
{
  float x, y;
  scanf("%f %f", &x, &y);
  printf("X: %f, Y: %f, X/Y: %f", x, y, x/y);
  return 0;
}
```
</details>
<details>
<summary><h3>
Ques-5 The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15. Write a program to get these values from the user and display the prices as follows
```
*** LIST OF PRICES ***
ITEM        PRICES
Rice        Rs. 16.75
Sugar       Rs. 15.00
```
</h3></summary>
```
#include<stdio.h>
int main()
{
  float rice, sugar;
  printf("Enter prices of rice and sugar respectively:");
  scanf("%f %f", &rice, &sugar);
  printf("*** LIST OF PRICES ***\n");
  printf("ITEM        PRICES\n");
  printf("Rice        Rs%.2f\n", rice);
  printf("Sugar       Rs%.2f", sugar);
  return 0;
}
```
</details>
<details>
<summary><h3>
Ques-6 Write program to count and print the number of negative and positive numbers in a given set of numbers. Test your program with a suitable set of numbers. Use scanf to read the numbers. Reading should terminate when the value given is 0.</h3></summary>
```
#include<stdio.h>
int main()
{
  int num=1;
  while(num!=0){
    scanf("%d", &num);
    num>0?printf("POSITIVE\n"):printf("NEGATIVE\n");;
  }
  return 0;
}
```
</details>
<details>
<summary><h3>
Ques.7 Write a program to do the following
- Declare X and Y as integer variables and z as a short integer variable
- Assign two 6 digit numbers to x and y
- Assign the sum of x and y to z
- Output the values of x, y, z</h3></summary>
```
#include<stdio.h>
int main()
{
  int x, y;
  short int z;
  x = 123123;
  y = 456456;
  z = x + y;
  printf("X:%d, Y:%d, Z:%d", x, y, z); //Output of z is -10245
  return 0;
}
```
</details>
<details>
<summary><h3>
Ques-8 Write a program to read two floating point numbers using a scanf statement, assign their sum to an integer variable and then output the values of all three variables.</h3></summary>
```
#include<stdio.h>
int main()
{
  float a = 1.2, b = 2.5;
  int c = a + b;
  printf("A:%f, B:%f, C:%d", a, b, c);
  return 0;
}
```
</details>
<details>
<summary><h3>
Ques-9 Write a program to illustrate the use of _typedef_ declaration in the program.</h3></summary>
```
#include<stdio.h>
int main()
{
  typedef float REAL;
  REAL num= 1.0;
  printf("Number:%.2f", num);
  return 0;
}
```
</details>
<details>
<summary><h3>
Ques-10 Write a program to illustrate the use of symbolic constants in a real-life application.</h3></summary>
```
#include<stdio.h>
#define HOURS 24
int main()
{
  int i = 1;
  while(i<=HOURS){
    printf("Seconds in %d hour(s):%d\n", i, i*60*60);
    i++;
  }
  return 0;
}
```
</details>
