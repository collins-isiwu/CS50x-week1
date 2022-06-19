//Prints a left aligned pyramid

#include <cs50.h>
#include <stdio.h>

int main(void)
//prompt user for input
{
    int n;
    do
    {
        n = get_int("enter height of pyramid: ");
    }
    while (n < 1 || n > 8); //stricting user to input between 1 to 8 inclusive
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) //to make a grid
        {
            if (j < n - i + 1) //to flip the grid
            {
                printf(" "); //print spaces
            }
            else
            {
                printf("#"); //print hashes
            }
        }
        printf("\n"); //move to the next line
    }
}
