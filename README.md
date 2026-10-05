# cis165-lab3-
Course section: CIS-165-W099
# Step-by-Step Process
	sum.ccp: 
    Stores 2 values(50,100) in integer variables 
    Use addition to add both values together and store it in a sum variable called total 
    Display the total and label the output 
    
    mpg.cpp:
    Store 2 values (16,132) in double variables
    16 stored as gallons 
    132 stored as miles 
    Use division to divide miles from gallons and store the result in a variable called milesPerGallon 
    Display the result and label the output 
# Test Table 
Restored it back to its original values, even though the test table also records other values.


| Program | Value/Patterns Used | Expected Results | Actual Output | Match or Fix |
| --- | --- | --- | --- |  --- |
| **diamond.cpp** — assigned values | seven required lines | 150 | 150 | Match |
| **game_time.cpp** — assigned values |78, 144 | 19.5 MPG | 19.5 MPG | Match |
| **game_time.cpp** — changed values | 87, 160 | 1 hour and 27 mins; 2 hours and 40 mins; 1 hour and 13 mins | 1 hour and 27 mins; 2 hours and 40 mins; 1 hour and 13 mins | Match |

# How To Run The Program 
	1.Copy the code from the file 
  	2.Go to	[OnlineGDB](https://www.onlinegdb.com/) and paste the code 
	3.Make sure the language is C++ and click "Run" 

# Explanation 
Sum.ccp requires the code of two values (50 and 100) to get the sum. To do that, we store 50 as num1 and 100 as num2. In order to get the sum of the two values, we use the (+) operator, which is 150 and stored as total. To display the result, we use std::cout to print the value of total. The reason why we store the calculation in total before printing is to prevent any error when the program is calculating the result, and so it will have the value before displaying. 

The formula used in mpg.cpp was miles/gallons in order to get the miles per gallon. The data type chosen was double variables so the result will preserve the fractional value and give the most accurate answer when using the formula. By using integer operands when performing in division, the fractional part of the result will not be shown and it will not give the most accurate answer for the miles per gallon. 
