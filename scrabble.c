#include <stdio.h>
#include <cs50.h>
#include <string.h>

int cs(string s);

int main (void)
{

    int points[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    string alp = "abcdefghijklmnopqrstuvwxyz"

    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");

    int s1 = cs(p1);
    int s2 = cs(p2);

    string check;
    if (s1 < s2)
    {
        check = "Player 2 wins!";
    }
    else if (s2 < s1)
    {
        check = "Player 1 wins!";
    }
    else
    {
        check = "Draw!";
    }
    printf("%s\n",check);

}

int cs(string s)
{
    int a = 0;
    string c = "";
    for (i = 0, i < strlen(s),i++)
    {
        string c[i] = tolower(s[i])
    }
    for(i = 0, i < strlen(s),i++)
    {
        char si = s[i];
        if (isalpha(si))
        {
            si = tolower(si);
            int o = 0;
            char p = "";
            while (p != si)
            {

            }
        }
    }
}