#include<stdio.h>

int main()
{
    char word[51];
    int numWords, i, j;
    char swap;
    int numRepeat = 0;

    scanf("%s", word);
    numWords = 0;
    while (word[numWords] != '\0')
        numWords++;
    for (j = 0; j < numWords-1; j++)       // Sorting the word by alphabetical order start here.
    {                                      //
        for (i = 0; i < numWords-1; i++)   //
        {                                  //
            if (word[i] > word[i+1])       //
            {                              //
                swap = word[i];            //
                word[i] = word[i+1];       // 
                word[i+1] = swap;          //
            }                              //             
        }                                  //
    }                                      // End
    
    i = 0;
    while (i < numWords-1)                 // Check the repeating characters from the sorted word.
    {
        if (word[i] == word[i+1])
        {
            numRepeat++;
            j = i + 2;

            while (j < numWords && word[i] == word[j])  // Continue until it reaches a new character.
            {
                j++;
            }
            i = j;
        } else {
            i++;
        }
    }
    printf("%d", numRepeat);

    return 0;
}
