#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Names in contact list
    string names[] = {"Alice", "Bob", "Charlie", "David", "Eva"};

    // Phone numbers matching names
    string phone_numbers[] = {
        "+1234567890",
        "+1987654321",
        "+447911123456",
        "+919876543210",
        "+61234567890"
    };

    // Check if exactly one argument (name) is entered
    if (argc != 2)
    {
        printf("A name must be entered.\n");
        return 1;
    }

    // Name to search for
    string name = argv[1];

    // Calculate the number of contacts
    int length = sizeof(names) / sizeof(names[0]);

    // Search for the name in the contact list
    for (int i = 0; i < length; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Number of the contact is: %s\n", phone_numbers[i]);
            return 0;
        }
    }

    // If name is not found
    printf("Name is not in the contact list.\n");
    return 1;
}
