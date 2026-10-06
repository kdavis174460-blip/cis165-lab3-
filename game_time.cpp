/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
    const int LEVEL1_MIN = 78;
    const int LEVEL2_MIN = 144;

    int level1Hours = LEVEL1_MIN / 60;
    int level1RemainingMinutes = LEVEL1_MIN % 60;

    int level2Hours = LEVEL2_MIN / 60;
    int level2RemainingMinutes = LEVEL2_MIN % 60;

    int level2DiffMinutes = LEVEL2_MIN - LEVEL1_MIN;
    int differenceHours = level2DiffMinutes / 60;
    int differenceRemainingMinutes = level2DiffMinutes % 60;

    std::cout << "Level 1 time: " << level1Hours << " hours and " << level1RemainingMinutes << " minutes\n";
    
    std::cout << "Level 2 time: " << level2Hours << " hours and "<< level2RemainingMinutes << " minutes\n";
    
    std::cout << "Level 2 took longer by: " << differenceHours << " hours and " << differenceRemainingMinutes << " minutes\n";

    return 0; 
}
