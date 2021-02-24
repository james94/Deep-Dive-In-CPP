cmake_minimum_required(VERSION 3.16)
project(Deep-Dive-In-C++)

###################
# Basic Examples
###################

# First C++ Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/first")

# Second C++ Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/second")

# Triangle Area Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/math/geometry/area-perimeter/triangle-area")

# Finite Arithmetic Series Sum Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/math/precalculus/series/arithmetic-series-sum")

# Circle Area Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/math/geometry/area-perimeter/circle-area")

# Quadratic Formula Program with Two Root Results
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/math/algebra/quadratic-eqs-fun/quadratic-formula")

# Calculate Displacement Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/physics/one-dimensional-motion/kinematic-formulas/displacement")

# Calculate Simple Interest Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/economics/finance-capital-markets/interest-debt/simple-interest")

# Calculate Cylinder Volume Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/math/geometry/volume-surface-area/cylinder-volume")

# Calculate Distance Between 2 Points Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/math/geometry/pythagorean-theorem/distance-formula")

# Compound Assignment Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/operators/compound-assignment")

# Increment Decrement Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/operators/inc-dec")

# Char and Integer Overflow Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/overflow")

# Bitwise Operators Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/bitwise-operators")

# Enum and Typedef Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/enum-typedef")

# Net Salary Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/basics/life-skills/personal-finance/income-benefits/paycheck/net-salary")

###################
# Conditional Statement Examples
###################

# Find Max of 2 Numbers Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/max")

# Number is Pos or Neg Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/sign")

# Odd Even Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/odd-even")

# RollNo Valid Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/rollno-valid")

# Division Valid Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/division-valid")

# Compound Conditional Statement to Check if a Person is Working Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/check-is-working")

# Check a Person's Age Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/check-age")

# Check if a Person is Eligible Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/eligible")

# Find Max of 3 Numbers Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/find-max-of-3-num")

# Nature of Quadratic Roots Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/nature-quadratic-roots")

# Display Grades Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/display-grade-marks")

# Calculate Discount Bill Amount Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/discount-bill")

# Display Day Name Program (If Else and Switch Case Approaches)
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/display-day-name")

# Display Month Name Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/display-month-name")

# Digit To Word Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/display-digit-word")

# Arithmetic Operations Menu Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/arithmetic-operations-menu")

# Check if year Leap Year or not Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/conditional-statements/check-if-leap-year")

###################
# Loop Examples
###################

# Demo Loops: While, Do While, For
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/demo-loops")

# TODO: Add an infinite loop example, but answer why we would use it: threads, freertos, etc
# add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/infinite-loops")

# Multiplication Table Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/multiplication-table")

# Sum of Natural Numbers Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/sum-natural-numbers")

# Factorial of a Number Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/factorial-of-number")

# Factors of a Number Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/factors-of-number")

# Perfect Number Program
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/perfect-number")

##
# Programs that need to be completed are the following for loop examples
##

# Find Prime Number
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/find-prime-number")

# Display Digits of a Number in Reverse
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/display-digits-of-number-in-reverse")

# Check for Armstrong Nuumber
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/armstrong-number")

# Reverse a Number
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/reverse-a-number")

# Check if a Number is a Palindrome
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/palindrome-number")

# Display Number Digits as Words
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/display-number-digits-as-words")

# Find GCD of 2 Numbers
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/features/loops/find-gcd-of-2-numbers")
