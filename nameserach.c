#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    //array of names which is used for as a DB

    string names[] = {"Amr","Emad","John","Mark","Brian"};
    string name = argv[1];
    if (argc !=2)
    {
        printf("Only your allowed to use one in name in the search \n");
        return 1;
    }
    else
    {
        for (int i=0; i<3; i++)
        {
            if (strcmp(names[i],name) == 0)
            {
                printf("Name %s exists in matrix \n",names[i] );
                return 0;
            }
        }
    return 1;
    }
}