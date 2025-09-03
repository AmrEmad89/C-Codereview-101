#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //define an array of integers
    int numbers[] = {4,8,15,16,23,42};

    // Check if the arg count meets the AUP which is one 

    if (argc!=2)
    {
        printf("One input is only required \n");
        return 1;
        
    }

    else 
    {

        // convert the string to integer 

        int n = atoi(argv[1]);

        for (int i=0, length = sizeof(numbers) / sizeof(numbers[0]) ; i<length; i++)
        {
            // check each element in order if it has been found exit the code with 0 
            if (numbers[i] == n)
            {
                printf("Number has been found\n");
                return 0;
            }
        }
        // if the number is not in the array it will return 1 
        printf("Number doesn't exist \n");
        return 1;
        }

    
}