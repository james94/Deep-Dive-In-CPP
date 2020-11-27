# Conditional Statements Quiz

## Question 1

~~~cpp
if(1)
    cout << "Yes";
else
    cout << "No";
~~~

What will be printed in the code above? `"Yes`

Answer: `"Yes`

## Question 2

~~~cpp
int a = 4, b = 5;

if(a++ < b)
    cout << a;
else
    cout << ++b;
~~~

What will be printed in the code above? `5`

Answer: `5`

## Question 3

~~~cpp
int a = 4, b = 5;

if(a < b)
    cout << a;
cout << b;
~~~

What will be printed in the code above? `45`

Answer: `45`

## Question 4

~~~cpp
int x = 10, y = 5, z = 9;

if(x < y && ++y < z)
    cout << x << " " << y << " " << z;
else
    cout << x << " " << y << " " << z;
~~~

What is the output? `10 5 9`

Answer: `10 5 9`

## Question 5

~~~cpp
int x = 4;

if(x == 1)
    cout << "One";
else if(x == 2)
    cout << "Two";
else if(x == 3)
    cout << "Three";
else
    cout << "Invalid";
~~~

How many conditions are checked? `3`

Answer: `3`

## Question 6

~~~cpp
switch(10 & 6)
{
    case 1: cout << "One ";
    case 2: cout << "Two ";
    case 3: cout << "Three ";
}
~~~

What is the output? `Two Three`

Answer: `Two Three`

## Question 7

Which block is executed when case is not available? `default`

Answer: `default`

## Question 8

Absense of _________ statement will cause fall-thru

Answer: `break`

## Question 9

Which datatype are allowed to be used in cases?

Answer: `int` and `char`

## Question 10

`Switch` is faster, then `else if` ladder
