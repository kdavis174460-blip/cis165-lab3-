# cis165-lab3-
Course section: CIS-165-W099
# Step-by-Step Process
	_diamond.ccp:_ 
    (1)Print the pattern using 7 codes of line 
	(2) Make sure to use "'\n'" in the output 
	(3) Use the appropriate spaces for the pattern 
		(a) In order of spaces used: 3,2,10,1,2,3
    
    _game_time.cpp:_
    (1)Store 2 values (78,144) in named constant variables
    (2)78 stored as level 1 
    (3)144 stored as level 2
    (4)Use division to divide level 1/level 2 by 60 to find the hours 
	(5)Use the remainder to find the minutes by using % 60
	(6)Find the difference level 2 took by subtracting level 1 from level 2 
	(7) Repeat 4-5 using the difference to find how long it took
    (8)Display the result and label the output 
	
# Test Table 
Restored it back to its original values, even though the test table also records other values.


| Program | Value/Patterns Used | Expected Results | Actual Output | Match or Fix |
| --- | --- | --- | --- |  --- |
| **diamond.cpp** — assigned values | seven required lines | Spaces: 3,2,1,0,1,2,3 Stars: 1,3,5,7,5,3,1| Spaces: 3,2,1,0,1,2,3 Stars: 1,3,5,7,5,3,1 | Match |
| **game_time.cpp** — assigned values |78, 144 | 1 hour and 18 mins; 2 hours and 24 mins; 1 hour and 6 mins | 1 hour and 18 mins; 2 hours and 24 mins; 1 hour and 6 mins | Match |
| **game_time.cpp** — changed values | 87, 160 | 1 hour and 27 mins; 2 hours and 40 mins; 1 hour and 13 mins | 1 hour and 27 mins; 2 hours and 40 mins; 1 hour and 13 mins | Match |

# How To Run The Program 
	1.Copy the code from the file 
  	2.Go to	[OnlineGDB](https://www.onlinegdb.com/) and paste the code 
	3.Make sure the language is C++ and click "Run" 

# Explanation 
Sum.ccp requires the code of two values (50 and 100) to get the sum. To do that, we store 50 as num1 and 100 as num2. In order to get the sum of the two values, we use the (+) operator, which is 150 and stored as total. To display the result, we use std::cout to print the value of total. The reason why we store the calculation in total before printing is to prevent any error when the program is calculating the result, and so it will have the value before displaying. 

The formula used in mpg.cpp was miles/gallons in order to get the miles per gallon. The data type chosen was double variables so the result will preserve the fractional value and give the most accurate answer when using the formula. By using integer operands when performing in division, the fractional part of the result will not be shown and it will not give the most accurate answer for the miles per gallon. 
