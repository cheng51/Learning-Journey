#include <stdio.h>
#include <string.h>

int count(char *string);

int main()
{   
    char player1[20];
    char player2[20];
    printf("player1:");
    scanf("%s", player1);
    printf("player2:");
    scanf("%s", player2);

    int scors1 = count(player1);
    int scors2 = count(player2);

    printf("%i, %i\n", scors1, scors2);

    if(scors1 > scors2)
    {
        printf("Player 1 WINS!\n");
    }
    else if (scors1 < scors2)
    {
        printf("Player 2 WINS!\n");
    }
    else
        printf("Tie.\n");

    return 0;
    
}

int count(char *string)
{
    int count = 0;
    for(int i = 0; i < strlen(string); i++)
    {
        char ch = string[i];
        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'l':
            case 'n':
            case 'o':
            case 'r':
            case 's':
            case 't':
            case 'u':
                count += 1;
                break;
            case 'd':
            case 'g':
                count += 2;
                break;
            case 'b':
            case 'c':
            case 'm':
            case 'p':
                count += 3;
                break;
            case 'f':
            case 'h':
            case 'v':
            case 'w':
            case 'y':
                count += 4;
                break;
            case 'k':
                count += 5;
                break;
            case 'j':
            case 'x':
                count += 8;
                break;
            case 'q':
            case 'z':
                count += 10;
                break;
        }
    }
    return count;
}