# Deep Dive In CPP

Basics to Advanced C++ Concepts, Object-Oriented Programming, Exception Handling, STL, C++11 Features and more

## Build All Examples

~~~bash
git clone https://github.com/james94/Deep-Dive-In-CPP
cd Deep-Dive-In-CPP
mkdir build
cd build
cmake ../
make
~~~

## Run C++ Draw Pattern 3 Example Program

~~~bash
cd features/
cd arrays/draw-pattern3/

./DrawPattern3
~~~

The expected output:

~~~bash
[james@localhost draw-pattern3]$ ./DrawPattern3 
Drew Lower Rightside of Triangle with C++:

            C++ 
        C++ C++ 
    C++ C++ C++ 
C++ C++ C++ C++ 

Drew Upper Leftside of Triangle with Py:

Py Py Py Py 
Py Py Py   
Py Py     
Py
~~~


## Run a C++ Example Program (Triangle Area)

~~~bash
# cd into features/ and You should be able to see folders of each example program
cd features/

# ls current features/ directory should show basics/ and so forth
ls

# for instance, if you want to run one of the basics C++ example programs, you can
# cd into that particular directory. NOTE: the binary executable has an "_" in it
cd basics/math/geometry/area-perimeter/triangle-area
./triangle_area

# Alternatively, if you know the path to binary, then you can exeute it from features/
./basics/math/geometry/area-perimeter/triangle-area/triangle_area
~~~

The expected output for the triangle area program is the following due to hardcoded sides:

~~~bash
# Expected output for triangle area with hardcoded sides is
17.5
~~~

## C++ Basics

- [First program](./features/basics/first/main.cpp)
- [Second program](./features/basics/second/main.cpp)
- [Geometry: Area of Triangle](./features/basics/math/geometry/area-perimeter/triangle-area/main.cpp)
    - **Find the area of a triangle**. This triangle area equation is from geometry in the area-perimeter section.
- [Precalculus: Arithmetic Series Sum program](./features/basics/math/precalculus/series/arithmetic-series-sum/main.cpp)
    - **Find the Sum of a Finite Arithmetic Series**. Also known as `finding the Sum of n Natural Numbers`.
- [Algebra: Quadratic Formula](./features/basics/math/algebra/quadratic-eqs-fun/quadratic-formula/main.cpp)
    - **Find roots of quadratic equations**
- [Physics: Displacement program](./features/basics/physics/one-dimensional-motion/kinematic-formulas/displacement/main.cpp)
    - **Finding the displacement** is an area of Physics in one dimensional motion from kinematic formulas. We look at the displacement that happened while the particle achieved magnitude of final velocity `vf` from initial velocity `vi`. In Abdul Bari's course, he wrote it down as finding speed, but that was not correct.
- [Economics: Simple Interest program](./features/finance-capital-markets/interest-debt/simple-interest/main.cpp)
    - **Finding Simple Interest** is an area of Economics in Finance Capital Markets from Interest Debt. Simple Interest is the amount of money you owe after borrowing P principle for T years at R rate.
- [Geometry: Cylinder Volume program](./features/basics/math/geometry/volume-surface-area/cylinder-volume/main.cpp)
    - **Find the volume of a cylinder** is an area of Geometry in volume surface area from cylinder volume.
- [Geometry: Distance Formula program](./features/basics/math/geometry/pythagorean-theorem/distance-formula/main.cpp)
    - **Find the distance between 2 points** is an area of Geometry in pythagorean theorem from distance formula.
- [Programming: Operators - Compound Assignment program](./features/basics/operators/compound-assignment/main.cpp)
    - **Use Compound Assignment** is an area of programming operators from compound assignment. For this example, the plus compound assignment operator `+=` is used to add a certain amount based on a variable `x` to the `sum` variable.
- [Programming: Operators - Increment and Decrement program](./features/basics/operators/inc-dec/main.cpp)
    - **Use increment and decrement** operators is an area of programming operators from increment and decrement. For this example, the post and pre increment opertors `x++` and `++x` are used.
- [Programming: Overflow Protection](./features/basics/overflow/main.cpp)
    - **Exploring Overflow protection**. For this example, we look into overflow protection for `char` and `int` variables.
- [Programming: Bitwsise Operators](./features/basics/bitwise-operators/main.cpp)
    - **Exploring Bitwise Operators**. For this example, we look at the bitwise `&` and, `|` or, `^` exclusive or, `<<` shift left, `>>` shift right and `~` complement operators.
- [Programming: Enum and Typedef program](./features/basics/enum-typedef/main.cpp)
    - **Exploring Enum and Typedef**. For this example, we look at `enum` and renaming an `int` data type to `marks` for improving readability.
- [Find Area of Circle](./features/basics/math/geometry/area-perimeter/circle-area/main.cpp)
    - **Find area of a circle**. This circle-area equation comes from geometry in area-perimeter section.
- [Find Net Salary](./features/basics/life-skills/personal-finance/income-benefits/paycheck/net-salary/main.cpp)
    - **Find Net Salary**. This net salary equation is an area of life skills in personal finance -> income-benefits -> paycheck. We go over an example of how to compute the net salary from the basic salary, percent of allowances and deductions.
- [C++ Basics Quiz](./features/basics/Quiz.md)

## Conditional Statements

- [Finding Max of 2 Numbers](./features/conditional-statements/max/main.cpp)
- [Number is Positive or Negative](./features/conditional-statements/sign/main.cpp)
- [Number is Odd or Even](./features/conditional-statements/odd-even/main.cpp)
- [Is RollNo Valid?](./features/conditional-statements/rollno-valid/main.cpp)
- [Is Division Valid?](./features/conditional-statements/division-valid/main.cpp)
- [Check If Working Hours](./features/conditional-statements/check-is-working/main.cpp)
- [Check Age of a Person](./features/conditional-statements/check-age/main.cpp)
- [Check if Person is Eligible for an Offer](./features/conditional-statements/eligible/main.cpp)
- [Find Maximum of 3 numbers](./features/conditional-statements/find-max-of-3-num/main.cpp)
- [Find Nature of Quadratic Roots](./features/conditional-statements/nature-quadratic-roots/main.cpp)
- [Display Grades for Student Marks](./features/conditional-statements/display-grade-marks/main.cpp)
- [Calculate Discounted Bill Amount](./features/conditional-statements/discount-bill/main.cpp)
- [Display Day Name](./features/conditional-statements/display-day-name/main.cpp)
    - This example shows how to check the day using if, else if and else and alternatively, it does this using switch case statements too. Then once the day is found, it displays the name.
- [Display Month Name](./features/conditional-statements/display-month-name/main.cpp)
- [Display Digit in Words](./features/conditional-statements/display/main.cpp)
- [Arithmetic Operations Using Switch](./features/conditional-statements/arithmetic-operations-menu/main.cpp)
- [Check if leap year](./features/conditional-statements/check-if-leap-year/main.cpp)
    - There was a student exercise #3 on finding the discounted bill amount, but that was very similar to coding exercise 17, so I did not include it here.

## Loops

- [Demo Loops: While, Do While, For](./features/loops/demo-loops/main.cpp)
- [Multiplication Table Program](./features/loops/multiplication-table/main.cpp)
- [Sum of Natural Numbers Program](./features/loops/sum-natural-numbers/main.cpp)
- [Factorial of a Number Program](./features/loops/factorial-of-number/main.cpp)
- [Factors of a Number Program](./features/loops/factors-of-number/main.cpp)
- [Perfect Number Program](./features/loops/perfect-number/main.cpp)
- [Find Prime Number](./features/loops/find-prime-number/main.cpp)
- [Display Digits of a Number in Reverse](./features/loops/display-digits-of-number-in-reverse/main.cpp)
- [Check for Armstrong Nuumber](./features/loops/armstrong-number/main.cpp)
- [Reverse a Number](./features/loops/reverse-a-number/main.cpp)
- [Check if a Number is a Palindrome](./features/loops/palindrome-number/main.cpp)
- [Display Number Digits as Words](./features/loops/display-number-digits-as-words/main.cpp)
- [Find GCD of 2 Numbers](./features/loops/find-gcd-of-2-numbers/main.cpp)

## Arrays

- [Array Declarations and C++11 for each loop for iteration](./features/arrays/array-declarations/main.cpp)
- [Sum of Array Elements](./features/arrays/sum-of-array-elements/main.cpp)
- [Find Max Element in Array](./features/arrays/find-max-element-in-array/main.cpp)
- [Find Min Element in Array](./features/arrays/find-min-element-in-array/main.cpp)
- [Linear Search for key element in unsorted array](./features/arrays/linear-search/main.cpp)
- [Binary Search for key element in sorted array](./features/arrays/binary-search/main.cpp)
- [Count the number of positive and negative numbers in array](./features/arrays/count-pos-neg-numbers-in-array/main.cpp)
- [Nested loop for iterating a multidimensional array](./features/arrays/nested-loop-for-multidimensional-array/main.cpp)

- [Draw Pattern 1: Create a 4 x 4 grid with a counter increments in each cell](./features/arrays/draw-pattern1/main.cpp)

- [Draw Pattern 2: Draw a Lower Triangle of i; Draw a Upper Triangle of j](./features/arrays/draw-pattern2/main.cpp)

- [Draw Pattern 3: Draw a Lower Rightside of Triangle with C++; Draw a Upper Leftside of Triangle with Py](./features/arrays/draw-pattern3/main.cpp)
