//prompt user for name and then say hello, name
#include<stdio.h>
#include<cs50.h>

int main(void) //main function
{
    string name = get_string("what is your name?\n"); //user inputs name
    printf("hello, %s\n", name); //say hello, name
}
