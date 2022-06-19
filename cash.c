//the greedy theory

#include <math.h>
#include <stdio.h>
#include <cs50.h>

int main(void) //main function
{
//Initialization of variables
    float owed;
    int Q = 25;
    int D = 10;
    int N = 5;
    int P = 1;

//prompt user for the dollar
    do
    {
        owed = get_float("change owed: ");
    }
    while (owed < 0);

//convert the dollar to cents
    int cents = round(owed * 100);

//initialization of variables
    int reminder1 = 0;
    int reminder2 = 0;
    int reminder3 = 0;

    int coinused = 0;
    int coinused1 = 0;
    int coinused2 = 0;
    int coinused3 = 0;

//conditions for Q to execute + the reminder1 and coinused value
    if (cents % Q == 0)
    {
        coinused = cents / Q;
    }
    else if (cents % Q != 0)
    {
        reminder1 = cents % Q;
        coinused = cents / Q;
    }

//conditions for D to execute + the reminder2 and coinused1 value
    if (reminder1 % D == 0)
    {
        coinused1 = reminder1 / D;
    }
    else if (reminder1 % D != 0)
    {
        reminder2 = reminder1 % D;
        coinused1 = reminder1 / D;
    }

//conditions for N to execute + the reminder3 and coinused2 value
    if (reminder2 % N == 0)
    {
        coinused2 = reminder2 / N;
    }
    else if (reminder2 % N != 0)
    {
        reminder3 = reminder2 % N;
        coinused2 = reminder2 / N;
    }

//conditions for P to execute + the reminder4 and coinused3 value
    if (reminder3 % P == 0)
    {
        coinused3 = reminder3 / P;
    }

//add up coinused, coinused1, coinused2, coinused3 and print the total number minimum of coin used
    printf("number of coin used: %i\n", coinused + coinused1 + coinused2 + coinused3);
}
