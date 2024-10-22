
// program that counts the characters of the stdin input
// and prints the number of characters

#include <stdio.h>

int main(int argc, char *argv[])
{
    int count = 0; 

    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'c')
    {
        while (getchar() != EOF)
        {
            count++;
        }
        printf("\nNumber of characters: %d\n", count);
        return 0;
    }

    else if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h')
    {
        printf("This program is designed to count the number of characters\n");
        printf("from standard input (stdin) and print the total count.\n");
        printf("It also provides help information when a specific command-line argument is passed. \n");
        printf("Explanation of the arguments:\n");
        printf("-c\t counts the characters\n");
        printf("-w\t counts the words\n");
    }

    return 0;
}
