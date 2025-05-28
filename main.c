#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
    int dice_rolls[100];
    for (int i=0; i<100; i++){
        dice_rolls[i] = (rand() %6)+1;
        //check for rolls
        printf("roll %d\n", dice_rolls[i]);
    }
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int sum = 0;

    for (int i = 0; i<100; i++){
        if (dice_rolls[i] ==1){
            one++;
        }

        if (dice_rolls[i] ==2){
            two++;
        }
        
        if (dice_rolls[i] ==3){
            three++;
        }
        
        if (dice_rolls[i] ==4){
            four++;
        }
        
        if (dice_rolls[i] ==5){
            five++;
        }
        
        if (dice_rolls[i] ==6){
            six++;
        }
    }
   
    // Your code goes here

    return 0;
}
