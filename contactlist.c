#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Define a new data type called Contact composed of a name and phone number

typedef struct 
{
    string name;
    string phone_number;
}
contact;

int main(int argc, string argv[])
{
    // intilaize a contact_list for phone numbers and names 

    contact contact_list[] = 
    {
        {"Alice", "+1234567890"},
        {"Bob", "+1987654321"},
        {"Charlie", "+447911123456"},
        {"David", "+919876543210"},
        {"Eva", "+61234567890"}
    };

    if (argc !=2)
    {
        printf("Please enter exactly one name as a command-line argument.\n");
        return 1;
    }


    string contact_name = argv[1];

    int length = sizeof(contact_list)/sizeof(contact_list[0]);

   // Search for the contact in the list (case-insensitive)
    for (int i=0; i<length; i++)
    {
        if (strcasecmp(contact_list[i].name, contact_name ) == 0)
        {
            printf("%s\'s number is %s \n",contact_list[i].name,contact_list[i].phone_number );
            return 0;
        }
    }

    // if the name is not found 
    printf("%s's number isn't in contact list\n", contact_name);
    return 1;


}