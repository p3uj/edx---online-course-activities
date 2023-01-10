#include <stdio.h>

int main() 
{
    char word[51];
    int i, length = 0, middle, found = 0;

    scanf("%s", word);
	while (word[length] != '\0')
		length++;
	middle = length / 2;

    for (i = 0; i <= middle; i++){				// To check if first half of the word contains 't' or 'T'
        if (word[i] == 't' || word[i] == 'T'){	//
            found = 1;							//
            break;								//
        }										//
    }											// End

    if (found)
        printf("1\n");
    else{
        for (i = middle; i < length; i++){			// To check if second half of the word contains 't' or 'T'
            if (word[i] == 't' || word[i] == 'T'){	//
                printf("2\n");						//
                goto stop;							//
            }										//
        }											// End
        printf("-1\n");
    }
	stop:
    return 0;
}
