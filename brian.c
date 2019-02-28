#include <stdio.h>
#include <cs50.h>

//creators brian valdes,dionte blake,and ever pinto
int TOTALPOINTSEARNED=0;
int TOTALPOINTSPOSSIBLE=0;
    
int main(void){
    int assignments = get_int("total amount of assignments?;\n"); //puts how many times it will ask for both totals
    for(int i = 0; i < assignments;i++){ //creates a loop for the code
        TOTALPOINTSEARNED += get_int ("total points earned on the assignment #%d:\n",i+1); //makes a variable for x and d
        TOTALPOINTSPOSSIBLE += get_int ("total points possible on the assignment #%d:\n",i+1); //this adds total points possible
    }
    float finalscore = 0;
    finalscore=((float)TOTALPOINTSEARNED/(float)TOTALPOINTSPOSSIBLE)*100; //divides the global words and then multiplies by 100
    printf("your grade:");
    printf("%0.2f",finalscore); //this code divides the grade to get the final percentage
    printf("%%\n"); //puts the percent mark at the end of the grade
}
